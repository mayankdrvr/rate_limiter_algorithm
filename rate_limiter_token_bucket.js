class TokenBucket {
  constructor(capacity, refillRate, initialTokens = capacity) {
    this.capacity = capacity;
    this.refillRate = refillRate;
    this.tokens = Math.min(capacity, initialTokens);
    this.lastRefill = Date.now();
  }

  getToken() {
    this.refill();
    if (this.tokens > 0) {
      this.tokens--;
      return true;
    }
    return false;
  }

  refill() {
    const now = Date.now();
    const elapsed = Math.floor((now - this.lastRefill) / 1000); // Time in seconds
    this.tokens = Math.min(this.capacity, this.tokens + (elapsed * this.refillRate));
    this.lastRefill = now;
  }
}

// Example usage
const rateLimit = 5; // Requests per second
const bucket = new TokenBucket(rateLimit, rateLimit);

function handleRequest() {
  // Simulate some processing
  // ...

  // Check if token available for request
  if (bucket.getToken()) {
    handleRequest();
  } else {
    console.log("Request rate limit exceeded!");
  }
}

// Make requests with a slight delay to simulate traffic
for (let i = 0; i < 10; i++) {
  setTimeout(() => handleRequest(), i * 100); // Simulate delay
}
