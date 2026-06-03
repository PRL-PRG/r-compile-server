package org.prlprg.bc2c;

class ByteCodeStack {

  private int max = 0;
  private int top = 0;

  public String push() {
    top++;
    max = Math.max(max, top);
    return get(top);
  }

  public String pop() {
    if (top < 0) {
      throw new IllegalArgumentException("Stack underflow: %d".formatted(top));
    }
    var s = get(top);
    --top;
    return "*" + s;
  }

  public String get(int i) {
    return "R" + i;
  }

  public int max() {
    return max;
  }

  public boolean isEmpty() {
    return top == 0;
  }

  public int top() {
    return top;
  }

  public void reset(int newTop) {
    if (newTop < -1) {
      throw new IllegalArgumentException("Invalid top: %d".formatted(newTop));
    }
    this.top = newTop;
  }
}
