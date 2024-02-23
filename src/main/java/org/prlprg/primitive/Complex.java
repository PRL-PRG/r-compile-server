package org.prlprg.primitive;

/** Complex number */
public record Complex(double real, double imaginary) {
  @Override
  public String toString() {
    return real + "+" + imaginary + "i";
  }

  /** Is either the real or imaginary part NA or NaN? */
  public boolean isNaOrNaN() {
    return Double.isNaN(real) || Double.isNaN(imaginary);
  }
}
