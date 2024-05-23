package org.prlprg.primitive;

// FIXME: this has to be be class so we have properly handle NA
//  In R: identical(NA+1i, NA_complex) == true
/** Complex number */
public record Complex(double real, double imag) {
  public static Complex fromReal(double x) {
    return new Complex(x, 0);
  }

  @Override
  public String toString() {
    return real + (imag >= 0 ? "+" : "") + imag + "i";
  }

  public Complex add(Complex other) {
    return new Complex(real + other.real, imag + other.imag);
  }

  public Complex sub(Complex other) {
    return new Complex(real - other.real, imag - other.imag);
  }

  public Complex mul(Complex other) {
    return new Complex(
        real * other.real - imag * other.imag, real * other.imag + imag * other.real);
  }

  public Complex div(Complex other) {
    var D = other.real * other.real + other.imag * other.imag;
    return new Complex(
        (real * other.real + imag * other.imag) / D, (imag * other.real - real * other.imag) / D);
  }

  public Complex pow(Complex that) {
    double r = Math.hypot(this.real, this.imag);
    double i = Math.atan2(this.imag, this.real);
    double theta = i * that.real;
    double rho;

    if (that.imag == 0) {
      rho = Math.pow(r, that.real);
    } else {
      r = Math.log(r);
      theta += r * that.imag;
      rho = Math.exp(r * that.real - i * that.imag);
    }

    return new Complex(rho * Math.cos(theta), rho * Math.sin(theta));
  }

  public Complex minus() {
    return new Complex(-real, -imag);
  }

  /** Is either the real or imaginary part NA or NaN? */
  public boolean isNaOrNaN() {
    return Double.isNaN(real) || Double.isNaN(imag);
  }
}
