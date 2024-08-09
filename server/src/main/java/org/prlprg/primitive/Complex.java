package org.prlprg.primitive;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/** Complex number */
public record Complex(double real, double imag) {
  public static Complex fromReal(double x) {
    return new Complex(x, 0);
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

  // region serialization and deserialization
  @ParseMethod
  private static Complex parse(Parser p) {
    var s = p.scanner();

    var dbl = s.readDouble();
    if (s.trySkip('i')) {
      return new Complex(0, dbl);
    }

    double imag;
    if (s.trySkip('+') || s.nextCharIs('-')) {
      imag = s.readDouble();
      s.assertAndSkip('i');
    } else {
      imag = 0;
    }

    return new Complex(dbl, imag);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (real != 0 || imag == 0) {
      p.print(real);
    }

    if (imag != 0) {
      if (real != 0 && imag > 0) {
        w.write('+');
      }
      p.print(imag);
      w.write('i');
    }
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
