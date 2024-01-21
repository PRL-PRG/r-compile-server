package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.primitives.ImmutableDoubleArray;
import com.google.common.primitives.ImmutableIntArray;
import org.prlprg.bc.Bc;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;

import javax.annotation.Nullable;
import java.util.Arrays;
import java.util.Collection;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public interface SEXP {
    // region constants
    NilSXP NULL = NilSXP.INSTANCE;
    LglSXP TRUE = SimpleLglSXPImpl.TRUE;
    LglSXP FALSE = SimpleLglSXPImpl.FALSE;
    LglSXP NA_LOGICAL = SimpleLglSXPImpl.NA;
    IntSXP NA_INTEGER = new SimpleIntSXPImpl(Constants.NA_INT);
    RealSXP NA_REAL = new SimpleRealSXPImpl(Constants.NA_REAL);
    StrSXP NA_STRING = new SimpleStrSXPImpl(Constants.NA_STRING);
    SpecialSymSXP UNBOUND_VALUE = new SpecialSymSXP("UNBOUND_VALUE");

    SpecialSymSXP MISSING_ARG = new SpecialSymSXP("MISSING_ARG");

    RegSymSXP ELLIPSIS = new RegSymSXP("...");

    SpecialEnvSXP GLOBAL_ENV = new SpecialEnvSXP("GLOBAL_ENV");

    SpecialEnvSXP BASE_ENV = new SpecialEnvSXP("BASE_ENV");

    SpecialEnvSXP BASE_NAMESPACE = new SpecialEnvSXP("BASE_NAMESPACE");

    SpecialEnvSXP EMPTY_ENV = new SpecialEnvSXP("EMPTY_ENV");
    // endregion

    // region constructors
    static LglSXP logical(Logical data) {
        return switch (data) {
            case TRUE -> TRUE;
            case FALSE -> FALSE;
            case NA -> NA_LOGICAL;
        };
    }

    static IntSXP integer(int data) {
        return new SimpleIntSXPImpl(data);
    }

    static RealSXP real(double data) {
        return new SimpleRealSXPImpl(data);
    }

    static StrSXP string(String data) {
        return new SimpleStrSXPImpl(data);
    }

    static ComplexSXP complex(Complex data) {
        return new SimpleComplexSXPImpl(data);
    }

    static IntSXP integer(int first, int... rest) {
        return integer(ImmutableIntArray.of(first, rest));
    }

    static RealSXP real(double first, double... rest) {
        return real(ImmutableDoubleArray.of(first, rest));
    }

    static StrSXP string(String first, String... rest) {
        return string(ImmutableList.<String>builderWithExpectedSize(rest.length + 1).add(first).add(rest).build());
    }

    static ComplexSXP complex(Complex first, Complex... rest) {
        return complex(ImmutableList.<Complex>builderWithExpectedSize(rest.length + 1).add(first).add(rest).build());
    }

    static LglSXP logical(Logical[] data) {
        return logical(ImmutableList.copyOf(data));
    }

    static IntSXP integer(int[] data) {
        return integer(ImmutableIntArray.copyOf(data));
    }

    static RealSXP real(double[] data) {
        return real(ImmutableDoubleArray.copyOf(data));
    }

    static StrSXP string(String[] data) {
        return string(ImmutableList.copyOf(data));
    }

    static ComplexSXP complex(Complex[] data) {
        return complex(ImmutableList.copyOf(data));
    }

    static VecSXP vec(SEXP... data) {
        return vec(ImmutableList.copyOf(data));
    }

    static ExprSXP expr(SEXP... data) {
        return expr(ImmutableList.copyOf(data));
    }

    static ComplexSXP complex(double real, double imaginary) {
        return new SimpleComplexSXPImpl(new Complex(real, imaginary));
    }

    static LglSXP logical(Logical data, Attributes attributes) {
        return logical(ImmutableList.of(data), attributes);
    }

    static IntSXP integer(int data, Attributes attributes) {
        return integer(ImmutableIntArray.of(data), attributes);
    }

    static RealSXP real(double data, Attributes attributes) {
        return real(ImmutableDoubleArray.of(data), attributes);
    }

    static StrSXP string(String data, Attributes attributes) {
        return string(ImmutableList.of(data), attributes);
    }

    static ComplexSXP complex(Complex data, Attributes attributes) {
        return complex(ImmutableList.of(data), attributes);
    }

    static LglSXP logical(ImmutableList<Logical> data) {
        return logical(data, Attributes.NONE);
    }

    static IntSXP integer(ImmutableIntArray data) {
        return integer(data, Attributes.NONE);
    }

    static RealSXP real(ImmutableDoubleArray data) {
        return real(data, Attributes.NONE);
    }

    static StrSXP string(ImmutableList<String> data) {
        return string(data, Attributes.NONE);
    }

    static ComplexSXP complex(ImmutableList<Complex> data) {
        return complex(data, Attributes.NONE);
    }

    static VecSXP vec(ImmutableList<SEXP> data) {
        return vec(data, Attributes.NONE);
    }

    static ExprSXP expr(ImmutableList<SEXP> data) {
        return expr(data, Attributes.NONE);
    }

    static LglSXP logical(Collection<Logical> data) {
        return logical(ImmutableList.copyOf(data), Attributes.NONE);
    }

    static IntSXP integer(Collection<Integer> data) {
        return integer(ImmutableIntArray.copyOf(data), Attributes.NONE);
    }

    static RealSXP real(Collection<Double> data) {
        return real(ImmutableDoubleArray.copyOf(data), Attributes.NONE);
    }

    static StrSXP string(Collection<String> data) {
        return string(ImmutableList.copyOf(data), Attributes.NONE);
    }

    static ComplexSXP complex(Collection<Complex> data) {
        return complex(ImmutableList.copyOf(data), Attributes.NONE);
    }

    static VecSXP vec(Collection<SEXP> data) {
        return vec(ImmutableList.copyOf(data), Attributes.NONE);
    }

    static ExprSXP expr(Collection<SEXP> data) {
        return expr(ImmutableList.copyOf(data), Attributes.NONE);
    }

    static LglSXP logical(Logical[] data, Attributes attributes) {
        return logical(ImmutableList.copyOf(data), attributes);
    }

    static IntSXP integer(int[] data, Attributes attributes) {
        return integer(ImmutableIntArray.copyOf(data), attributes);
    }

    static RealSXP real(double[] data, Attributes attributes) {
        return real(ImmutableDoubleArray.copyOf(data), attributes);
    }

    static StrSXP string(String[] data, Attributes attributes) {
        return string(ImmutableList.copyOf(data), attributes);
    }

    static ComplexSXP complex(Complex[] data, Attributes attributes) {
        return complex(ImmutableList.copyOf(data), attributes);
    }

    static VecSXP vec(SEXP[] data, Attributes attributes) {
        return vec(ImmutableList.copyOf(data), attributes);
    }

    static ExprSXP expr(SEXP[] data, Attributes attributes) {
        return expr(ImmutableList.copyOf(data), attributes);
    }

    static LglSXP logical(ImmutableList<Logical> data, Attributes attributes) {
        if (data.size() == 1 && attributes.isEmpty()) {
            return logical(data.getFirst());
        }
        return new LglSXPImpl(data, attributes);
    }

    static IntSXP integer(ImmutableIntArray data, Attributes attributes) {
        if (data.length() == 1 && attributes.isEmpty()) {
            return integer(data.get(0));
        }
        return new IntSXPImpl(data, attributes);
    }

    static RealSXP real(ImmutableDoubleArray data, Attributes attributes) {
        if (data.length() == 1 && attributes.isEmpty()) {
            return real(data.get(0));
        }
        return new RealSXPImpl(data, attributes);
    }

    static StrSXP string(ImmutableList<String> data, Attributes attributes) {
        if (data.size() == 1 && attributes.isEmpty()) {
            return string(data.getFirst());
        }
        return new StrSXPImpl(data, attributes);
    }

    static ComplexSXP complex(ImmutableList<Complex> data, Attributes attributes) {
        if (data.size() == 1 && attributes.isEmpty()) {
            return complex(data.getFirst());
        }
        return new ComplexSXPImpl(data, attributes);
    }

    static VecSXP vec(ImmutableList<SEXP> data, Attributes attributes) {
        return new VecSXPImpl(data, attributes);
    }

    static ExprSXP expr(ImmutableList<SEXP> data, Attributes attributes) {
        return new ExprSXPImpl(data, attributes);
    }

    static LglSXP logical(Collection<Logical> data, Attributes attributes) {
        return logical(ImmutableList.copyOf(data), attributes);
    }

    static IntSXP integer(Collection<Integer> data, Attributes attributes) {
        return integer(ImmutableIntArray.copyOf(data), attributes);
    }

    static RealSXP real(Collection<Double> data, Attributes attributes) {
        return real(ImmutableDoubleArray.copyOf(data), attributes);
    }

    static StrSXP string(Collection<String> data, Attributes attributes) {
        return string(ImmutableList.copyOf(data), attributes);
    }

    static ComplexSXP complex(Collection<Complex> data, Attributes attributes) {
        return complex(ImmutableList.copyOf(data), attributes);
    }

    static VecSXP vec(Collection<SEXP> data, Attributes attributes) {
        return vec(ImmutableList.copyOf(data), attributes);
    }

    static ExprSXP expr(Collection<SEXP> data, Attributes attributes) {
        return expr(ImmutableList.copyOf(data), attributes);
    }

    static ListSXP list(SEXP... data) {
        return list(Arrays.stream(data).map(TaggedElem::new).collect(Collectors.toList()));
    }

    static ListSXP list(TaggedElem... data) {
        return list(ImmutableList.copyOf(data));
    }

    static ListSXP list(ImmutableList<TaggedElem> data) {
        return list(data, Attributes.NONE);
    }

    static ListSXP list(Collection<TaggedElem> data) {
        return list(ImmutableList.copyOf(data));
    }

    static ListSXP list(TaggedElem[] data, Attributes attributes) {
        return list(ImmutableList.copyOf(data), attributes);
    }

    static ListSXP list(ImmutableList<TaggedElem> data, Attributes attributes) {
        if (data.isEmpty() && !attributes.isEmpty()) {
            throw new IllegalArgumentException("Cannot create a list with attributes but no elements");
        }
        return data.isEmpty() ? NULL : new ListSXPImpl(data, attributes);
    }

    static ListSXP list(Collection<TaggedElem> data, Attributes attributes) {
        return list(ImmutableList.copyOf(data), attributes);
    }

    static BCodeSXP bcode(Bc bc) {
        return new BCodeSXPImpl(bc);
    }

    static CloSXP closure(ListSXP formals, SEXP body, EnvSXP environment) {
        return closure(formals, body, environment, Attributes.NONE);
    }

    static CloSXP closure(ListSXP formals, SEXP body, EnvSXP environment, Attributes attributes) {
        return new CloSXPImpl(formals, body, environment, attributes);
    }

    static RegEnvSXP environment(EnvSXP enclos) {
        return new RegEnvSXP(enclos);
    }

    static LangSXP lang(SymOrLangSXP fun, ListSXP args) {
        return lang(fun, args, Attributes.NONE);
    }

    static LangSXP lang(SymOrLangSXP fun, ListSXP args, Attributes attributes) {
        return new LangSXPImpl(fun, args, attributes);
    }

    static RegSymSXP symbol(String name) {
        if (name.equals("...")) {
            return ELLIPSIS;
        }
        return new RegSymSXP(name);
    }
    // endregion

    SEXPType type();

    /** @return {@code null} if the SEXP doesn't support attributes ({@link #withAttributes} throws an exception)
     *          and {@code Attributes.NONE} if it does but there are none. */
    default @Nullable Attributes attributes() {
        return Attributes.NONE;
    }

    /** @throws UnsupportedOperationException if the SEXP doesn't support attributes. */
    default SEXP withAttributes(Attributes attributes) {
        throw new UnsupportedOperationException("Cannot set attributes on " + type());
    }
}

final class SEXPUtil {
    static String toString(SEXP sexp, Object... data) {
        var attributes = sexp.attributes();
        return "<" + sexp.type().name().toLowerCase() + " " +
                Stream.of(data).map(Object::toString).collect(Collectors.joining(" ")) +
                (attributes == null || attributes.isEmpty() ? "" : "\n  | " + attributes.entrySet().stream().map(e -> e.getKey() + " = " + e.getValue()).collect(Collectors.joining("\n  , "))) +
                ">";
    }

    private SEXPUtil() {
    }
}
