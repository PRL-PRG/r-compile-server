package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.primitives.ImmutableDoubleArray;
import com.google.common.primitives.ImmutableIntArray;
import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.bc.Bc;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;

/** All global {@link SEXP}s and methods to create SEXPs are here so they're easy to find. */
@SuppressWarnings("MissingJavadoc")
public final class SEXPs {
  // region constants
  public static final NilSXP NULL = NilSXP.INSTANCE;
  public static final LglSXP TRUE = ScalarLglSXP.TRUE;
  public static final LglSXP FALSE = ScalarLglSXP.FALSE;
  public static final LglSXP NA_LOGICAL = ScalarLglSXP.NA;
  public static final IntSXP NA_INTEGER = new ScalarIntSXP(Constants.NA_INT);
  public static final RealSXP NA_REAL = new ScalarRealSXP(Constants.NA_REAL);
  public static final StrSXP NA_STRING = new ScalarStrSXP(Constants.NA_STRING);
  public static final ComplexSXP NA_COMPLEX = new ScalarComplexSXP(Constants.NA_COMPLEX);
  public static final LglSXP EMPTY_LOGICAL = EmptyLglSXPImpl.INSTANCE;
  public static final IntSXP EMPTY_INTEGER = EmptyIntSXPImpl.INSTANCE;
  public static final RealSXP EMPTY_REAL = EmptyRealSXPImpl.INSTANCE;
  public static final StrSXP EMPTY_STRING = EmptyStrSXPImpl.INSTANCE;
  public static final ComplexSXP EMPTY_COMPLEX = EmptyComplexSXPImpl.INSTANCE;
  public static final SpecialSymSXP UNBOUND_VALUE = new SpecialSymSXP("UNBOUND_VALUE");

  public static final SpecialSymSXP MISSING_ARG = new SpecialSymSXP("MISSING_ARG");

  private static final Map<String, RegSymSXP> SYMBOL_POOL = new HashMap<>();

  public static final RegSymSXP DOTS_SYMBOL = symbol("...");
  public static final RegSymSXP SUPER_ASSIGN = symbol("<<-");
  public static final RegSymSXP ASSIGN_TMP = symbol("*tmp*");
  public static final RegSymSXP ASSIGN_VTMP = symbol("*vtmp*");

  static {
    Set.of("TRUE", "FALSE", "NULL", "NA", "Inf", "NaN")
        .forEach(x -> SYMBOL_POOL.put(x, new RegSymSXP(x)));
  }

  public static final EmptyEnvSXP EMPTY_ENV = EmptyEnvSXP.INSTANCE;

  // endregion

  // region constructors
  public static LglSXP logical(Logical data) {
    return switch (data) {
      case TRUE -> TRUE;
      case FALSE -> FALSE;
      case NA -> NA_LOGICAL;
    };
  }

  public static IntSXP integer(int data) {
    return new ScalarIntSXP(data);
  }

  public static RealSXP real(double data) {
    return new ScalarRealSXP(data);
  }

  public static StrSXP string(String data) {
    return new ScalarStrSXP(data);
  }

  public static ComplexSXP complex(Complex data) {
    return new ScalarComplexSXP(data);
  }

  public static IntSXP integer(int first, int... rest) {
    return integer(ImmutableIntArray.of(first, rest));
  }

  public static RealSXP real(double first, double... rest) {
    return real(ImmutableDoubleArray.of(first, rest));
  }

  public static StrSXP string(String first, String... rest) {
    return string(
        ImmutableList.<String>builderWithExpectedSize(rest.length + 1)
            .add(first)
            .add(rest)
            .build());
  }

  public static ComplexSXP complex(Complex first, Complex... rest) {
    return complex(
        ImmutableList.<Complex>builderWithExpectedSize(rest.length + 1)
            .add(first)
            .add(rest)
            .build());
  }

  public static LglSXP logical(Logical[] data) {
    return logical(ImmutableList.copyOf(data));
  }

  public static IntSXP integer(int[] data) {
    return integer(ImmutableIntArray.copyOf(data));
  }

  public static IntSXP integer(Integer[] data) {
    return integer(ImmutableIntArray.copyOf(Arrays.asList(data)));
  }

  public static RealSXP real(double[] data) {
    return real(ImmutableDoubleArray.copyOf(data));
  }

  public static RealSXP real(Double[] data) {
    return real(ImmutableDoubleArray.copyOf(Arrays.asList(data)));
  }

  public static StrSXP string(String[] data) {
    return string(ImmutableList.copyOf(data));
  }

  public static ComplexSXP complex(Complex[] data) {
    return complex(ImmutableList.copyOf(data));
  }

  public static VecSXP vec(SEXP... data) {
    return vec(ImmutableList.copyOf(data));
  }

  public static ExprSXP expr(SEXP... data) {
    return expr(ImmutableList.copyOf(data));
  }

  public static ComplexSXP complex(double real, double imaginary) {
    return new ScalarComplexSXP(new Complex(real, imaginary));
  }

  public static LglSXP logical(Logical data, Attributes attributes) {
    return logical(ImmutableList.of(data), attributes);
  }

  public static IntSXP integer(int data, Attributes attributes) {
    return integer(ImmutableIntArray.of(data), attributes);
  }

  public static RealSXP real(double data, Attributes attributes) {
    return real(ImmutableDoubleArray.of(data), attributes);
  }

  public static StrSXP string(String data, Attributes attributes) {
    return string(ImmutableList.of(data), attributes);
  }

  public static ComplexSXP complex(Complex data, Attributes attributes) {
    return complex(ImmutableList.of(data), attributes);
  }

  public static LglSXP logical(ImmutableList<Logical> data) {
    return logical(data, Attributes.NONE);
  }

  public static IntSXP integer(ImmutableIntArray data) {
    return integer(data, Attributes.NONE);
  }

  public static RealSXP real(ImmutableDoubleArray data) {
    return real(data, Attributes.NONE);
  }

  public static StrSXP string(ImmutableList<String> data) {
    return string(data, Attributes.NONE);
  }

  public static ComplexSXP complex(ImmutableList<Complex> data) {
    return complex(data, Attributes.NONE);
  }

  public static VecSXP vec(ImmutableList<SEXP> data) {
    return vec(data, Attributes.NONE);
  }

  public static ExprSXP expr(ImmutableList<SEXP> data) {
    return expr(data, Attributes.NONE);
  }

  public static LglSXP logical(Collection<Logical> data) {
    return logical(ImmutableList.copyOf(data), Attributes.NONE);
  }

  public static IntSXP integer(Collection<Integer> data) {
    return integer(ImmutableIntArray.copyOf(data), Attributes.NONE);
  }

  public static RealSXP real(Collection<Double> data) {
    return real(ImmutableDoubleArray.copyOf(data), Attributes.NONE);
  }

  public static StrSXP string(Collection<String> data) {
    return string(ImmutableList.copyOf(data), Attributes.NONE);
  }

  public static ComplexSXP complex(Collection<Complex> data) {
    return complex(ImmutableList.copyOf(data), Attributes.NONE);
  }

  public static VecSXP vec(Collection<SEXP> data) {
    return vec(ImmutableList.copyOf(data), Attributes.NONE);
  }

  public static ExprSXP expr(Collection<SEXP> data) {
    return expr(ImmutableList.copyOf(data), Attributes.NONE);
  }

  public static LglSXP logical(Logical[] data, Attributes attributes) {
    return logical(ImmutableList.copyOf(data), attributes);
  }

  public static IntSXP integer(int[] data, Attributes attributes) {
    return integer(ImmutableIntArray.copyOf(data), attributes);
  }

  public static RealSXP real(double[] data, Attributes attributes) {
    return real(ImmutableDoubleArray.copyOf(data), attributes);
  }

  public static StrSXP string(String[] data, Attributes attributes) {
    return string(ImmutableList.copyOf(data), attributes);
  }

  public static ComplexSXP complex(Complex[] data, Attributes attributes) {
    return complex(ImmutableList.copyOf(data), attributes);
  }

  public static VecSXP vec(SEXP[] data, Attributes attributes) {
    return vec(ImmutableList.copyOf(data), attributes);
  }

  public static ExprSXP expr(SEXP[] data, Attributes attributes) {
    return expr(ImmutableList.copyOf(data), attributes);
  }

  public static LglSXP logical(ImmutableList<Logical> data, Attributes attributes) {
    if (attributes.isEmpty()) {
      return switch (data.size()) {
        case 0 -> EMPTY_LOGICAL;
        case 1 -> logical(data.getFirst());
        default -> new LglSXPImpl(data, attributes);
      };
    }
    return new LglSXPImpl(data, attributes);
  }

  public static IntSXP integer(ImmutableIntArray data, Attributes attributes) {
    if (attributes.isEmpty()) {
      return switch (data.length()) {
        case 0 -> EMPTY_INTEGER;
        case 1 -> integer(data.get(0));
        default -> new IntSXPImpl(data, attributes);
      };
    }
    return new IntSXPImpl(data, attributes);
  }

  public static RealSXP real(ImmutableDoubleArray data, Attributes attributes) {
    if (attributes.isEmpty()) {
      return switch (data.length()) {
        case 0 -> EMPTY_REAL;
        case 1 -> real(data.get(0));
        default -> new RealSXPImpl(data, attributes);
      };
    }
    return new RealSXPImpl(data, attributes);
  }

  public static StrSXP string(ImmutableList<String> data, Attributes attributes) {
    if (attributes.isEmpty()) {
      return switch (data.size()) {
        case 0 -> EMPTY_STRING;
        case 1 -> string(data.getFirst());
        default -> new StrSXPImpl(data, attributes);
      };
    }
    return new StrSXPImpl(data, attributes);
  }

  public static ComplexSXP complex(ImmutableList<Complex> data, Attributes attributes) {
    if (attributes.isEmpty()) {
      return switch (data.size()) {
        case 0 -> EMPTY_COMPLEX;
        case 1 -> complex(data.getFirst());
        default -> new ComplexSXPImpl(data, attributes);
      };
    }
    return new ComplexSXPImpl(data, attributes);
  }

  public static VecSXP vec(ImmutableList<SEXP> data, Attributes attributes) {
    return new VecSXPImpl(data, attributes);
  }

  public static ExprSXP expr(ImmutableList<SEXP> data, Attributes attributes) {
    return new ExprSXPImpl(data, attributes);
  }

  public static LglSXP logical(Collection<Logical> data, Attributes attributes) {
    return logical(ImmutableList.copyOf(data), attributes);
  }

  public static IntSXP integer(Collection<Integer> data, Attributes attributes) {
    return integer(ImmutableIntArray.copyOf(data), attributes);
  }

  public static RealSXP real(Collection<Double> data, Attributes attributes) {
    return real(ImmutableDoubleArray.copyOf(data), attributes);
  }

  public static StrSXP string(Collection<String> data, Attributes attributes) {
    return string(ImmutableList.copyOf(data), attributes);
  }

  public static ComplexSXP complex(Collection<Complex> data, Attributes attributes) {
    return complex(ImmutableList.copyOf(data), attributes);
  }

  public static VecSXP vec(Collection<SEXP> data, Attributes attributes) {
    return vec(ImmutableList.copyOf(data), attributes);
  }

  public static ExprSXP expr(Collection<SEXP> data, Attributes attributes) {
    return expr(ImmutableList.copyOf(data), attributes);
  }

  public static ListSXP list(SEXP... data) {
    return list(Arrays.stream(data).map(TaggedElem::new).toList());
  }

  public static ListSXP list(ImmutableList<TaggedElem> data) {
    return list(data, Attributes.NONE);
  }

  public static ListSXP list(Collection<TaggedElem> data) {
    return list(ImmutableList.copyOf(data));
  }

  // FIXME: ugly
  public static ListSXP list2(Collection<SEXP> data) {
    return list(data.stream().map(TaggedElem::new).toList());
  }

  public static ListSXP list(TaggedElem[] data, Attributes attributes) {
    return list(ImmutableList.copyOf(data), attributes);
  }

  public static ListSXP list(ImmutableList<TaggedElem> data, Attributes attributes) {
    if (data.isEmpty() && !attributes.isEmpty()) {
      throw new IllegalArgumentException("Cannot create a list with attributes but no elements");
    }
    return data.isEmpty() ? NULL : new ListSXPImpl(data, attributes);
  }

  public static ListSXP list(Collection<TaggedElem> data, Attributes attributes) {
    return list(ImmutableList.copyOf(data), attributes);
  }

  public static BCodeSXP bcode(Bc bc) {
    return new BCodeSXPImpl(bc);
  }

  public static CloSXP closure(ListSXP formals, SEXP body, EnvSXP environment) {
    return closure(formals, body, environment, Attributes.NONE);
  }

  public static CloSXP closure(
      ListSXP formals, SEXP body, EnvSXP environment, @Nullable Attributes attributes) {
    return new CloSXPImpl(
        formals, body, environment, attributes == null ? Attributes.NONE : attributes);
  }

  public static LangSXP lang(SymOrLangSXP fun, ListSXP args) {
    return lang(fun, args, Attributes.NONE);
  }

  public static LangSXP lang(SymOrLangSXP fun, ListSXP args, Attributes attributes) {
    return new LangSXPImpl(fun, args, attributes);
  }

  public static RegSymSXP symbol(String name) {
    return SYMBOL_POOL.computeIfAbsent(name, RegSymSXP::new);
  }

  // endregion

  static String toString(SEXP sexp, Object... data) {
    var attributes = sexp.attributes();
    return "<"
        + sexp.type().name().toLowerCase()
        + " "
        + Stream.of(data).map(Object::toString).collect(Collectors.joining(" "))
        + (attributes == null || attributes.isEmpty()
            ? ""
            : "\n  | "
                + attributes.entrySet().stream()
                    .map(e -> RegSymSXP.escape(e.getKey()) + " = " + e.getValue())
                    .collect(Collectors.joining("\n  , ")))
        + ">";
  }

  private SEXPs() {}

  public static SEXP builtin(String name) {
    return new BuiltinSXP(name);
  }

  public static SEXP special(String name) {
    return new SpecialSXP(name);
  }

  @SuppressWarnings("unchecked")
  public static <T> VectorSXP<T> vector(SEXPType type, ImmutableList<T> build) {
    return switch (type) {
      case LGL -> (VectorSXP<T>) logical((List<Logical>) build);
      case INT -> (VectorSXP<T>) integer((List<Integer>) build);
      case REAL -> (VectorSXP<T>) real((List<Double>) build);
      case STR -> (VectorSXP<T>) string((List<String>) build);
      case CPLX -> (VectorSXP<T>) complex((List<Complex>) build);
      default -> throw new IllegalArgumentException("Unsupported type: " + type);
    };
  }
}
