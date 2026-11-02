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

  /// C's complex division: compiler-rt's `__divdc3`, with the fused multiply-adds that arm64
  /// macOS's build of it uses.
  public Complex div(Complex other) {
    double a = real, b = imag, c = other.real, d = other.imag;
    var absC = Math.abs(c);
    var absD = Math.abs(d);
    var logbw = logb(Double.isNaN(absC) ? absD : Double.isNaN(absD) ? absC : Math.max(absC, absD));
    var ilogbw = 0;
    if (Double.isFinite(logbw)) {
      ilogbw = (int) logbw;
      c = Math.scalb(c, -ilogbw);
      d = Math.scalb(d, -ilogbw);
    }
    var denom = Math.fma(c, c, d * d);
    var x = Math.scalb(Math.fma(a, c, b * d) / denom, -ilogbw);
    var y = Math.scalb(Math.fma(b, c, -(a * d)) / denom, -ilogbw);
    if (Double.isNaN(x) && Double.isNaN(y)) {
      if (denom == 0 && (!Double.isNaN(a) || !Double.isNaN(b))) {
        x = Math.copySign(Double.POSITIVE_INFINITY, c) * a;
        y = Math.copySign(Double.POSITIVE_INFINITY, c) * b;
      } else if ((Double.isInfinite(a) || Double.isInfinite(b))
          && Double.isFinite(c)
          && Double.isFinite(d)) {
        a = Math.copySign(Double.isInfinite(a) ? 1 : 0, a);
        b = Math.copySign(Double.isInfinite(b) ? 1 : 0, b);
        x = Double.POSITIVE_INFINITY * Math.fma(a, c, b * d);
        y = Double.POSITIVE_INFINITY * Math.fma(b, c, -(a * d));
      } else if (logbw == Double.POSITIVE_INFINITY && Double.isFinite(a) && Double.isFinite(b)) {
        c = Math.copySign(Double.isInfinite(c) ? 1 : 0, c);
        d = Math.copySign(Double.isInfinite(d) ? 1 : 0, d);
        x = 0.0 * Math.fma(a, c, b * d);
        y = 0.0 * Math.fma(b, c, -(a * d));
      }
    }
    return new Complex(x, y);
  }

  /// C's `logb`: the unbiased exponent, also of subnormals.
  private static double logb(double x) {
    if (x == 0) {
      return Double.NEGATIVE_INFINITY;
    } else if (!Double.isFinite(x)) {
      return Math.abs(x);
    }
    var exponent = Math.getExponent(x);
    return exponent >= Double.MIN_EXPONENT ? exponent : Math.getExponent(x * 0x1p54) - 54;
  }

  /// Same as GNU-R's `mycpow` (`complex.c`).
  public Complex pow(Complex that) {
    if (real == 0 && imag == 0) {
      if (that.imag != 0) {
        return new Complex(Double.NaN, Double.NaN);
      }
      // R_pow(0, y)
      var y = that.real;
      return fromReal(y == 0 ? 1 : y > 0 ? 0 : y < 0 ? Double.POSITIVE_INFINITY : y);
    }
    if (that.imag == 0 && that.real == (int) that.real && Math.abs((int) that.real) <= 65536) {
      return powInt((int) that.real);
    }
    // GNU-R calls the C library's `cpow`, which (glibc's and macOS's both) is `cexp(y * clog(x))`.
    return that.mul(log()).exp();
  }

  /// C's `cexp`, except when `exp(real)` overflows, where the C library scales.
  public Complex exp() {
    var expReal = Math.exp(real);
    return new Complex(expReal * Math.cos(imag), expReal * Math.sin(imag));
  }

  /// C's `clog`. Its real part is `log(|z|)`, computed more precisely than `log(hypot(...))`.
  private Complex log() {
    var big = Math.max(Math.abs(real), Math.abs(imag));
    var ratio = Math.min(Math.abs(real), Math.abs(imag)) / big;
    var logAbs = Double.isInfinite(big) ? big : Math.log(big) + 0.5 * Math.log1p(ratio * ratio);
    return new Complex(logAbs, Math.atan2(imag, real));
  }

  /// Same as GNU-R's `R_cpow_n` (`complex.c`): exponentiation by squaring.
  private Complex powInt(int k) {
    if (k == 0) {
      return fromReal(1);
    } else if (k == 1) {
      return this;
    } else if (k < 0) {
      return fromReal(1).div(powInt(-k));
    }

    var z = fromReal(1);
    var x = this;
    while (k > 0) {
      if ((k & 1) != 0) {
        z = z.mul(x);
      }
      if (k == 1) {
        break;
      }
      k >>= 1;
      x = x.mul(x);
    }
    return z;
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

    if (real != 0) {
      p.print(real);
      if (imag >= 0 || Double.isNaN(imag)) {
        w.write('+');
      }
    }
    p.print(imag);
    w.write('i');
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
