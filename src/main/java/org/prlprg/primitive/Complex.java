package org.prlprg.primitive;

// FIXME: this has to be be class so we have properly handle NA
//  In R: identical(NA+1i, NA_complex) == true
/** Complex number */
public record Complex(double real, double imaginary) {
  public static Complex fromReal(double x) {
    return new Complex(x, 0);
  }

  @Override
  public String toString() {
    return real + (imaginary > 0 ? "+" : "") + imaginary + "i";
  }
}
