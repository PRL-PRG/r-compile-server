package org.prlprg.primitive;

/** Complex number */
public record Complex(double real, double imaginary) {
    @Override
    public String toString() {
        return real + "+" + imaginary + "i";
    }
}
