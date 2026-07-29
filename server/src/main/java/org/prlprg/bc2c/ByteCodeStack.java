package org.prlprg.bc2c;

class ByteCodeStack {

  private int max = 0;
  private int top = 0;

  public String push() {
    reset(top + 1);
    return get(top);
  }

  public String pop() {
    var s = get(top);
    reset(top - 1);
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
    if (newTop < 0) {
      throw new IllegalArgumentException("Invalid stack top: %d".formatted(newTop));
    }
    this.max = Math.max(max, newTop);
    this.top = newTop;
  }
}
