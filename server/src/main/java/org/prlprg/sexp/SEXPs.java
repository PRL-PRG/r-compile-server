package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import com.google.common.primitives.ImmutableDoubleArray;
import com.google.common.primitives.ImmutableIntArray;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.stream.Collector;
import javax.annotation.Nullable;
import org.prlprg.bc.Bc;
import org.prlprg.primitive.BuiltinId;
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
  public static final IntSXP EMPTY_INTEGER = EmptyIntSXPImpl.INSTANCE;
  public static final RealSXP EMPTY_REAL = EmptyRealSXPImpl.INSTANCE;
  public static final LglSXP EMPTY_LOGICAL = EmptyLglSXPImpl.INSTANCE;
  public static final RawSXP EMPTY_RAW = EmptyRawSXPImpl.INSTANCE;
  public static final ComplexSXP EMPTY_COMPLEX = EmptyComplexSXPImpl.INSTANCE;
  public static final StrSXP EMPTY_STRING = EmptyStrSXPImpl.INSTANCE;
  public static final SpecialSymSXP UNBOUND_VALUE = new SpecialSymSXP("unbound");

  public static final SpecialSymSXP MISSING_ARG = new SpecialSymSXP("missing");

  private static final Map<String, RegSymSXP> SYMBOL_POOL = new HashMap<>();

  public static final RegSymSXP DOTS_SYMBOL = symbol("...");
  public static final RegSymSXP SUPER_ASSIGN = symbol("<<-");
  public static final RegSymSXP ASSIGN_TMP = symbol("*tmp*");
  public static final RegSymSXP ASSIGN_VTMP = symbol("*vtmp*");

  public static final RegSymSXP DOT_EXTERNAL2 = symbol(".External2");

  static {
    Set.of("TRUE", "FALSE", "NULL", "NA", "Inf", "NaN")
        .forEach(x -> SYMBOL_POOL.put(x, new RegSymSXP(x)));
  }

  public static final EmptyEnvSXP EMPTY_ENV = EmptyEnvSXP.INSTANCE;

  // endregion constants

  // region constructors
  /// Lazy promise.
  public static PromSXP promise(SEXP expr, EnvSXP env) {
    return promise(expr, UNBOUND_VALUE, env);
  }

  /// Eager promise, unless `val` is [#UNBOUND_VALUE].
  public static PromSXP promise(SEXP expr, SEXP val, EnvSXP env) {
    return new PromSXPImpl(expr, val, env);
  }

  public static IntSXP integer(int data) {
    return new ScalarIntSXP(data);
  }

  public static RealSXP real(double data) {
    return new ScalarRealSXP(data);
  }

  public static LglSXP logical(boolean data) {
    return data ? TRUE : FALSE;
  }

  public static LglSXP logical(Logical data) {
    return switch (data) {
      case TRUE -> TRUE;
      case FALSE -> FALSE;
      case NA -> NA_LOGICAL;
    };
  }

  public static RawSXP raw(byte data) {
    return new ScalarRawSXP(data);
  }

  public static ComplexSXP complex(Complex data) {
    return new ScalarComplexSXP(data);
  }

  public static StrSXP string(String data) {
    return new ScalarStrSXP(data);
  }

  public static IntSXP integer(int data, Attributes attributes) {
    return integer(new int[] {data}, attributes);
  }

  public static RealSXP real(double data, Attributes attributes) {
    return real(new double[] {data}, attributes);
  }

  public static LglSXP logical(Logical data, Attributes attributes) {
    return logical(new Logical[] {data}, attributes);
  }

  public static RawSXP raw(byte data, Attributes attributes) {
    return raw(new byte[] {data}, attributes);
  }

  public static ComplexSXP complex(Complex data, Attributes attributes) {
    return complex(new Complex[] {data}, attributes);
  }

  public static StrSXP string(String data, Attributes attributes) {
    return string(new String[] {data}, attributes);
  }

  public static ComplexSXP complex(double real, double imaginary) {
    return new ScalarComplexSXP(new Complex(real, imaginary));
  }

  public static IntSXP integer(int... data) {
    return integer(data, Attributes.NONE);
  }

  public static IntSXP integer(ImmutableIntArray data) {
    return integer(data.toArray());
  }

  public static IntSXP integer(Integer[] data) {
    return integer(Arrays.asList(data));
  }

  public static RealSXP real(double... data) {
    return real(data, Attributes.NONE);
  }

  public static RealSXP real(ImmutableDoubleArray data) {
    return real(data.toArray());
  }

  public static RealSXP real(Double[] data) {
    return real(Arrays.asList(data));
  }

  public static LglSXP logical(Logical... data) {
    return logical(data, Attributes.NONE);
  }

  public static RawSXP raw(byte... data) {
    return raw(data, Attributes.NONE);
  }

  public static RawSXP raw(Byte[] data) {
    return raw(Arrays.asList(data));
  }

  public static ComplexSXP complex(Complex... data) {
    return complex(data, Attributes.NONE);
  }

  public static StrSXP string(String... data) {
    return string(data, Attributes.NONE);
  }

  public static VecSXP vec(SEXP... data) {
    return vec(data, Attributes.NONE);
  }

  public static ExprSXP expr(SEXP... data) {
    return expr(data, Attributes.NONE);
  }

  public static IntSXP integer(List<Integer> data) {
    return integer(data, Attributes.NONE);
  }

  public static RealSXP real(List<Double> data) {
    return real(data, Attributes.NONE);
  }

  public static LglSXP logical(List<Logical> data) {
    return logical(data, Attributes.NONE);
  }

  public static RawSXP raw(List<Byte> data) {
    return raw(data, Attributes.NONE);
  }

  public static ComplexSXP complex(List<Complex> data) {
    return complex(data, Attributes.NONE);
  }

  public static StrSXP string(List<String> data) {
    return string(data, Attributes.NONE);
  }

  public static VecSXP vec(List<SEXP> data) {
    return vec(data, Attributes.NONE);
  }

  public static ExprSXP expr(List<SEXP> data) {
    return expr(data, Attributes.NONE);
  }

  public static IntSXP integer(List<Integer> data, Attributes attributes) {
    return integer(data.stream().mapToInt(i -> i).toArray(), attributes);
  }

  public static RealSXP real(List<Double> data, Attributes attributes) {
    return real(data.stream().mapToDouble(d -> d).toArray(), attributes);
  }

  public static LglSXP logical(List<Logical> data, Attributes attributes) {
    return logical(data.toArray(Logical[]::new), attributes);
  }

  public static RawSXP raw(List<Byte> data, Attributes attributes) {
    // Unfortunately, there's no `Stream#mapToByte` and I don't know a better way.
    var array = new byte[data.size()];
    for (int i = 0; i < array.length; i++) {
      array[i] = data.get(i);
    }
    return raw(array, attributes);
  }

  public static ComplexSXP complex(List<Complex> data, Attributes attributes) {
    return complex(data.toArray(Complex[]::new), attributes);
  }

  public static StrSXP string(List<String> data, Attributes attributes) {
    return string(data.toArray(String[]::new), attributes);
  }

  public static VecSXP vec(List<SEXP> data, Attributes attributes) {
    return vec(data.toArray(SEXP[]::new), attributes);
  }

  public static ExprSXP expr(List<SEXP> data, Attributes attributes) {
    return expr(data.toArray(SEXP[]::new), attributes);
  }

  public static IntSXP integer(int[] data, Attributes attributes) {
    if (attributes.isEmpty()) {
      return switch (data.length) {
        case 0 -> EMPTY_INTEGER;
        case 1 -> integer(data[0]);
        default -> new IntSXPImpl(data, attributes);
      };
    }
    return new IntSXPImpl(data, attributes);
  }

  public static RealSXP real(double[] data, Attributes attributes) {
    if (attributes.isEmpty()) {
      return switch (data.length) {
        case 0 -> EMPTY_REAL;
        case 1 -> real(data[0]);
        default -> new RealSXPImpl(data, attributes);
      };
    }
    return new RealSXPImpl(data, attributes);
  }

  public static LglSXP logical(Logical[] data, Attributes attributes) {
    if (attributes.isEmpty()) {
      return switch (data.length) {
        case 0 -> EMPTY_LOGICAL;
        case 1 -> logical(data[0]);
        default -> new LglSXPImpl(data, attributes);
      };
    }
    return new LglSXPImpl(data, attributes);
  }

  public static RawSXP raw(byte[] data, Attributes attributes) {
    if (attributes.isEmpty()) {
      return switch (data.length) {
        case 0 -> EMPTY_RAW;
        case 1 -> raw(data[0]);
        default -> new RawSXPImpl(data, attributes);
      };
    }
    return new RawSXPImpl(data, attributes);
  }

  public static ComplexSXP complex(Complex[] data, Attributes attributes) {
    if (attributes.isEmpty()) {
      return switch (data.length) {
        case 0 -> EMPTY_COMPLEX;
        case 1 -> complex(data[0]);
        default -> new ComplexSXPImpl(data, attributes);
      };
    }
    return new ComplexSXPImpl(data, attributes);
  }

  public static StrSXP string(String[] data, Attributes attributes) {
    if (attributes.isEmpty()) {
      return switch (data.length) {
        case 0 -> EMPTY_STRING;
        case 1 -> string(data[0]);
        default -> new StrSXPImpl(data, attributes);
      };
    }
    return new StrSXPImpl(data, attributes);
  }

  public static VecSXP vec(SEXP[] data, Attributes attributes) {
    return new VecSXPImpl(data, attributes);
  }

  public static ExprSXP expr(SEXP[] data, Attributes attributes) {
    return new ExprSXPImpl(data, attributes);
  }

  public static ListSXP list() {
    return list(ImmutableList.of());
  }

  public static ListSXP list(SEXP... data) {
    return list(Arrays.stream(data).map(TaggedElem::new).toArray(TaggedElem[]::new));
  }

  /// FIXME: ugly
  public static ListSXP list1(List<SEXP> data) {
    return list(data.stream().map(TaggedElem::new).toArray(TaggedElem[]::new));
  }

  public static ListSXP list(TaggedElem... data) {
    return list(data, Attributes.NONE);
  }

  public static ListSXP list(List<TaggedElem> data) {
    return list(data, Attributes.NONE);
  }

  public static Collector<TaggedElem, ?, ListSXP> toList() {
    return Collector.<TaggedElem, ArrayList<TaggedElem>, ListSXP>of(
        ArrayList::new,
        ArrayList::add,
        (left, right) -> {
          left.addAll(right);
          return left;
        },
        SEXPs::list);
  }

  public static ListSXP list(List<TaggedElem> data, Attributes attributes) {
    return list(data.toArray(TaggedElem[]::new), attributes);
  }

  public static ListSXP list(TaggedElem[] data, Attributes attributes) {
    if (data.length == 0 && !attributes.isEmpty()) {
      throw new IllegalArgumentException("Cannot create a list with attributes but no elements");
    }
    return data.length == 0 ? NULL : new ListSXPImpl(data, attributes);
  }

  public static BCodeSXP bcode(Bc bc) {
    return new BCodeSXPImpl(bc);
  }

  public static CloSXP closure(ListSXP parameters, SEXP body, EnvSXP environment) {
    return closure(parameters, body, environment, Attributes.NONE);
  }

  public static CloSXP closure(
      ListSXP parameters, SEXP body, EnvSXP environment, @Nullable Attributes attributes) {
    return new CloSXPImpl(
        parameters, body, environment, attributes == null ? Attributes.NONE : attributes);
  }

  public static LangSXP lang(SymOrLangSXP fun, SEXP... args) {
    return lang(fun, list(args));
  }

  public static LangSXP lang(SymOrLangSXP fun, TaggedElem... args) {
    return lang(fun, list(args));
  }

  public static LangSXP lang(SymOrLangSXP fun, List<TaggedElem> args) {
    return lang(fun, list(args));
  }

  public static LangSXP lang1(SymOrLangSXP fun, List<SEXP> args) {
    return lang(fun, list1(args));
  }

  public static LangSXP lang(SymOrLangSXP fun, ListSXP args) {
    return lang(fun, args, Attributes.NONE);
  }

  public static LangSXP lang(SymOrLangSXP fun, ListSXP args, Attributes attributes) {
    return new LangSXPImpl(fun, args, attributes);
  }

  public static LangSXP blockLang(SEXP... args) {
    return lang(symbol("{"), args);
  }

  public static LangSXP blockLang(List<TaggedElem> args) {
    return lang(symbol("{"), args);
  }

  public static RegSymSXP symbol(String name) {
    return SYMBOL_POOL.computeIfAbsent(name, RegSymSXP::new);
  }

  public static BuiltinSXP builtin(BuiltinId id) {
    return new BuiltinSXP(id);
  }

  public static BuiltinSXP builtin(String name) {
    return builtin(BuiltinId.named(name));
  }

  public static SpecialSXP special(BuiltinId id) {
    return new SpecialSXP(id);
  }

  public static SpecialSXP special(String name) {
    return special(BuiltinId.named(name));
  }

  // Cast is checked by the first `if` statement.
  @SuppressWarnings("unchecked")
  public static <T> PrimVectorSXP<T> primVector(SEXPType type, List<T> data) {
    if (!data.isEmpty()
        && data.getFirst().getClass()
            != switch (type) {
              case INT -> Integer.class;
              case REAL -> Double.class;
              case LGL -> Logical.class;
              case RAW -> Byte.class;
              case CPLX -> Complex.class;
              case STR -> String.class;
              default -> throw new IllegalArgumentException("Unsupported type: " + type);
            }) {
      throw new IllegalArgumentException(
          "Cannot create a vector of " + type + " from a list of " + data.getFirst().getClass());
    }

    return switch (type) {
      case INT -> (PrimVectorSXP<T>) integer((List<Integer>) data);
      case REAL -> (PrimVectorSXP<T>) real((List<Double>) data);
      case LGL -> (PrimVectorSXP<T>) logical((List<Logical>) data);
      case RAW -> (PrimVectorSXP<T>) raw((List<Byte>) data);
      case CPLX -> (PrimVectorSXP<T>) complex((List<Complex>) data);
      case STR -> (PrimVectorSXP<T>) string((List<String>) data);
      default -> throw new IllegalArgumentException("Unsupported type: " + type);
    };
  }

  // endregion constructors

  private SEXPs() {}
}
