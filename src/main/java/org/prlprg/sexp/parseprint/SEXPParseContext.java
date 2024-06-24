package org.prlprg.sexp.parseprint;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Optional;
import org.prlprg.bc.Bc;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.closure.Closure;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Logical;
import org.prlprg.primitive.Names;
import org.prlprg.sexp.Attributes;
import org.prlprg.sexp.BaseEnvSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.EnvType;
import org.prlprg.sexp.GlobalEnvSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.NamespaceEnvSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPOrEnvType;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StaticEnvSXP;
import org.prlprg.sexp.SymOrLangSXP;
import org.prlprg.sexp.SymSXP;
import org.prlprg.sexp.TaggedElem;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.util.UnreachableError;

/**
 * Maps potentially-recursive {@link SEXP}s to integers so they can be deserialized.
 *
 * <p>If you parse multiple {@link SEXP}s with the same context, the references will be shared
 * across the parses. This is useful e.g. when parsing {@link CFG} or {@link Closure}, since they
 * may contain many references to the same large {@link StaticEnvSXP}.
 *
 * @implNote All of the logic for parsing {@link SEXP}s, {@link Attributes}, and {@link TaggedElem}s
 *     (all data-types in {@link org.prlprg.sexp}) is implemented in this class.
 */
public class SEXPParseContext implements HasSEXPParseContext {
  /** {@code true} if the character indicates the end of an {@link SEXP} or {@link TaggedElem}. */
  public static boolean delimitsSEXP(Integer c) {
    return c == -1 || c == ',' || c == ';' || c == ')' || c == ']' || c == '}' || c == '>';
  }

  private final ForBindings forBindings = new ForBindings();
  private final Map<Integer, SEXP> refs = new HashMap<>();

  /**
   * Context to parse {@link ListSXP}s and {@link TaggedElem}s as they are parsed in {@linkplain
   * CloSXP#parameters() closure parameters} and {@linkplain EnvSXP#bindingsAsTaggedElems()
   * environment bindings}.
   *
   * <p>Specifically, in any other context, the {@link TaggedElem}s without names parse like {@code
   * value}, those with missing values parse like {@code name=}, and empty lists parse {@code NULL}.
   * In this context, {@link TaggedElem}s without names parse like {@code =value}, those with
   * missing values parse like {@code name}, and empty lists parse {@code ()}. In both contexts,
   * {@link TaggedElem}s with names and non-missing values parse like {@code name=value}, those
   * without names and missing values parse and parse the empty string (to do this, the {@link
   * TaggedElem} must be followed by a delimiter like ",", ")", or end-of-input), and non-empty
   * lists parse like {@code (taggedElem1, taggedElem2, ...)}.
   */
  public ForBindings forBindings() {
    return forBindings;
  }

  @Override
  public SEXPParseContext sexpParseContext() {
    return this;
  }

  @ParseMethod
  private SEXP parseSEXP(Parser p) {
    var s = p.scanner();

    if (s.trySkip("<...")) {
      throw failParsingTruncated(p);
    } else if (s.nextCharSatisfies(Names::isValidStartChar)) {
      var name = Names.read(s, true);
      return switch (name) {
        case "NULL" -> SEXPs.NULL;
        case "TRUE" -> SEXPs.TRUE;
        case "FALSE" -> SEXPs.FALSE;
        case "NA_LGL" -> SEXPs.NA_LOGICAL;
        case "NA_INT" -> SEXPs.NA_INTEGER;
        case "NA_REAL" -> SEXPs.NA_REAL;
        case "NA_CPLX" -> SEXPs.NA_COMPLEX;
        case "NA_STR" -> SEXPs.NA_STRING;
        case "NA" ->
            throw s.fail("NA type (uppercase): NA_LGL, NA_INT, NA_REAL, NA_CPLX, NA_STR", name);
        default -> parseSymOrNotBlockLangSXP(name, p);
      };
    } else if (s.trySkip('{')) {
      // Block SymOrLangSXP
      var elems = ImmutableList.<TaggedElem>builder();
      if (!s.trySkip('}')) {
        do {
          // while (s.trySkip(';')) but IntelliJ doesn't complain
          while (true) {
            if (!s.trySkip(';')) {
              break;
            }
          }

          elems.add(p.parse(TaggedElem.class));
        } while (s.trySkip(';'));
        s.assertAndSkip('}');
      }
      return SEXPs.blockLang(elems.build());
    } else if (s.nextCharIs('(')) {
      // ListSXP
      return SEXPs.list(parseList(p));
    } else if (s.trySkip("<missing>")) {
      return SEXPs.MISSING_ARG;
    } else if (s.trySkip("<unbound>")) {
      return SEXPs.UNBOUND_VALUE;
    } else if (s.nextCharSatisfies(Character::isDigit)
        || s.nextCharIs('+')
        || s.nextCharIs('-')
        || s.nextCharsAre("NaN")) {
      var decimal = s.readDecimalString();
      if (s.trySkip('L')) {
        try {
          return SEXPs.integer(Integer.parseInt(decimal));
        } catch (NumberFormatException e) {
          throw s.fail("integer is too large to parse: " + decimal);
        }
      } else {
        var dbl = Double.parseDouble(decimal);
        if (s.trySkip('+') || s.nextCharIs('-')) {
          var imag = s.readDouble();
          s.assertAndSkip('i');
          return SEXPs.complex(dbl, imag);
        }
        if (s.trySkip('i')) {
          return SEXPs.complex(0, dbl);
        } else {
          return SEXPs.real(dbl);
        }
      }
    } else if (s.nextCharIs('"')) {
      var str = s.readQuoted('"');
      if (s.nextCharsAre("...")) {
        throw failParsingTruncated(p);
      }
      return SEXPs.string(str);
    } else if (s.trySkip('<')) {
      var type = s.runWithWhitespacePolicy(SkipWhitespace.NONE, () -> p.parse(SEXPOrEnvType.class));

      // If a ref is found, this is set to the index, we will yield the ref's SEXP in `base` early,
      // we won't parse attributes, and we will sanity check that the ref SEXP's type is `type`.
      var foundRefIndex = -1;
      var base =
          switch (type) {
            case SEXPType.LIST -> SEXPs.list(parseList(p));
            case SEXPType.LGL,
                SEXPType.INT,
                SEXPType.REAL,
                SEXPType.RAW,
                SEXPType.CPLX,
                SEXPType.STR,
                SEXPType.VEC,
                SEXPType.EXPR -> {
              var elems = new ArrayList<>();
              if (!s.trySkip('>') && !s.trySkip('|')) {
                if (s.nextCharsAre("...")) {
                  throw failParsingTruncated(p);
                }

                do {
                  var untypedElem = p.parse(SEXP.class);
                  var optTypedElem =
                      switch ((SEXPType) type) {
                        case LGL -> untypedElem.asScalarLogical();
                        case INT -> untypedElem.asScalarInteger();
                        case REAL -> untypedElem.asScalarReal();
                        case RAW -> untypedElem.asScalarRaw();
                        case CPLX -> untypedElem.asScalarComplex();
                        case STR -> untypedElem.asScalarString();
                        case VEC, EXPR -> Optional.of(untypedElem);
                        default -> throw new UnreachableError();
                      };
                  if (optTypedElem.isEmpty()) {
                    throw s.fail("scalar of type " + type, untypedElem.toString());
                  }
                  elems.add(optTypedElem.get());

                  if (s.nextCharsAre("...")) {
                    throw failParsingTruncated(p);
                  }
                } while (s.trySkip(','));
              }
              yield switch ((SEXPType) type) {
                case LGL ->
                    SEXPs.logical(
                        elems.stream()
                            .map(e -> (Logical) e)
                            .collect(ImmutableList.toImmutableList()));
                case INT -> SEXPs.integer(elems.stream().mapToInt(e -> (int) e).toArray());
                case REAL -> SEXPs.real(elems.stream().mapToDouble(e -> (double) e).toArray());
                case RAW ->
                    SEXPs.raw(
                        elems.stream().map(e -> (byte) e).collect(ImmutableList.toImmutableList()));
                case CPLX ->
                    SEXPs.complex(
                        elems.stream()
                            .map(e -> (Complex) e)
                            .collect(ImmutableList.toImmutableList()));
                case STR ->
                    SEXPs.string(
                        elems.stream()
                            .map(e -> (String) e)
                            .collect(ImmutableList.toImmutableList()));
                case VEC ->
                    SEXPs.vec(
                        elems.stream().map(e -> (SEXP) e).collect(ImmutableList.toImmutableList()));
                case EXPR ->
                    SEXPs.expr(
                        elems.stream().map(e -> (SEXP) e).collect(ImmutableList.toImmutableList()));
                default -> throw new UnreachableError();
              };
            }
            case SEXPType.CLO -> {
              var parameters = SEXPs.list(parseList(p.withContext(forBindings)));
              s.assertAndSkip("env=");
              var env = p.parse(EnvSXP.class);
              var attributes = s.trySkip("|") ? p.parse(Attributes.class) : Attributes.NONE;
              s.assertAndSkip("⇒");
              var body = p.parse(SEXP.class);
              yield SEXPs.closure(parameters, body, env, attributes);
            }
            case EnvType.USER, EnvType.GLOBAL, EnvType.NAMESPACE, EnvType.BASE, EnvType.EMPTY -> {
              var refIndex = parseRefIndex(p);
              if (refs.containsKey(refIndex)) {
                foundRefIndex = refIndex;
                yield refs.get(refIndex);
              }

              String name;
              String version;
              if (type == EnvType.NAMESPACE) {
                name = Names.read(s, true);
                s.assertAndSkip(':');
                version = s.readUntilWhitespace();
              } else {
                name = null;
                version = null;
              }

              if (s.nextCharsAre("...")) {
                throw failParsingTruncated(p);
              }

              boolean hasParent;
              boolean hasBindings;

              var env =
                  switch ((EnvType) type) {
                    case EMPTY -> {
                      if (refIndex != -1) {
                        throw s.fail("Empty environment can't have ref index");
                      }
                      hasParent = false;
                      hasBindings = false;
                      yield SEXPs.EMPTY_ENV;
                    }
                    case BASE -> {
                      hasParent = false;
                      hasBindings = true;
                      yield new BaseEnvSXP();
                    }
                    case NAMESPACE -> {
                      hasParent = true;
                      hasBindings = true;
                      try {
                        yield new NamespaceEnvSXP(name, version, SEXPs.EMPTY_ENV);
                      } catch (ClassCastException e) {
                        throw s.fail("Static environment must have static parent", e);
                      }
                    }
                    case GLOBAL -> {
                      hasParent = true;
                      hasBindings = true;
                      try {
                        yield new GlobalEnvSXP(SEXPs.EMPTY_ENV);
                      } catch (ClassCastException e) {
                        throw s.fail("Static environment must have static parent", e);
                      }
                    }
                    case USER -> {
                      hasParent = true;
                      hasBindings = true;
                      yield new UserEnvSXP(SEXPs.EMPTY_ENV);
                    }
                  };

              if (refIndex != -1) {
                refs.put(refIndex, env);
              }

              if (s.trySkip("parent=")) {
                if (!hasParent) {
                  throw s.fail("Environment of type " + type + " doesn't have an explicit parent");
                }

                try {
                  env.setParent(p.parse(EnvSXP.class));
                } catch (UnsupportedOperationException e) {
                  throw s.fail(
                      "Environment of type " + type + " can't have a parent of this type", e);
                }
              } else if (hasParent) {
                throw s.fail("Environment of type " + type + " must have an explicit parent");
              }

              if (s.nextCharIs('(')) {
                if (!hasBindings) {
                  throw s.fail("Environment of type " + type + " doesn't have explicit bindings");
                }

                var bindings = parseList(p.withContext(forBindings));
                for (var i = 0; i < bindings.size(); i++) {
                  var binding = bindings.get(i);
                  if (binding.tag() == null) {
                    throw s.fail("Binding " + i + "has no tag");
                  }
                  if (env.getLocal(binding.tag()).isPresent()) {
                    throw s.fail("Duplicate binding (second at index " + i + "): " + binding.tag());
                  }
                  env.set(binding.tag(), binding.value());
                }
              } else if (hasBindings) {
                throw s.fail("Environment of type " + type + " must have explicit bindings");
              }

              yield env;
            }
            case SEXPType.ENV ->
                throw s.fail("ENV SEXP must have a specific type (one of the `EnvType` instances)");
            case SEXPType.BCODE -> {
              var refIndex = parseRefIndex(p);
              if (refs.containsKey(refIndex)) {
                foundRefIndex = refIndex;
                yield refs.get(refIndex);
              }

              if (s.nextCharsAre("...")) {
                throw failParsingTruncated(p);
              }

              var bc = p.parse(Bc.class);
              var bcSexp = SEXPs.bcode(bc);

              if (refIndex != -1) {
                refs.put(refIndex, bcSexp);
              }

              yield bcSexp;
            }
            case SEXPType.PROM -> {
              s.assertAndSkip("env=");
              var env = p.parse(EnvSXP.class);
              var val = s.trySkip("val=") ? p.parse(SEXP.class) : SEXPs.UNBOUND_VALUE;
              s.assertAndSkip('⇒');
              var expr = p.parse(SEXP.class);
              yield new PromSXP(expr, val, env);
            }
            case SEXPType.BUILTIN, SEXPType.SPECIAL -> {
              var id = p.parse(BuiltinId.class);
              if (type == SEXPType.BUILTIN && id.isSpecial()) {
                throw s.fail("builtin SEXP", "special form");
              } else if (type == SEXPType.SPECIAL && !id.isSpecial()) {
                throw s.fail("special SEXP", "builtin form");
              }
              yield type == SEXPType.BUILTIN ? SEXPs.builtin(id) : SEXPs.special(id);
            }
            default ->
                throw s.fail(
                    "SEXP of type has a special syntax, so it can't be parsed this way: "
                        + s.readJavaIdentifierOrKeyword());
          };

      if (foundRefIndex != -1) {
        if ((base instanceof EnvSXP e ? e.envType() : base.type()) != type) {
          throw s.fail("Ref " + base + " at index " + foundRefIndex + " has wrong type: " + type);
        }
      } else {
        if (type != SEXPType.CLO && s.trySkip("|")) {
          try {
            base = base.withAttributes(p.parse(Attributes.class));
          } catch (UnsupportedOperationException e) {
            throw s.fail("SEXP of type " + type + " can't have attributes", e);
          }
        } else if (type == SEXPType.LIST) {
          throw s.fail(
              "List SEXP in this syntax must have attributes, otherwise remove the surrounding `<list` and `>`");
        }
      }

      s.trySkip('>');
      return base;
    } else {
      throw s.fail("Unexpected start of SEXP: " + Character.toString(s.peekChar()));
    }
  }

  @ParseMethod
  private SymOrLangSXP parseSymOrLangSXP(Parser p) {
    return parseSymOrNotBlockLangSXP(Names.read(p.scanner(), true), p);
  }

  @ParseMethod
  private SymSXP parseSymSXP(Parser p) {
    return SEXPs.symbol(Names.read(p.scanner(), true));
  }

  private SymOrLangSXP parseSymOrNotBlockLangSXP(String name, Parser p) {
    var s = p.scanner();

    SymOrLangSXP result = SEXPs.symbol(name);
    while (s.trySkip('(')) {
      var args = new ArrayList<TaggedElem>();
      if (!s.trySkip(')')) {
        while (true) {
          var arg = p.parse(TaggedElem.class);
          args.add(arg);
          if (s.trySkip(')')) {
            break;
          }
          s.assertAndSkip(',');
        }
      }
      result = SEXPs.lang(result, SEXPs.list(args));
    }
    return result;
  }

  /**
   * Parse the ref index, then assert that:
   *
   * <ul>
   *   <li>It doesn't re-define an existing ref.
   *   <li>It doesn't reference a non-existent ref.
   * </ul>
   */
  private int parseRefIndex(Parser p) {
    var s = p.scanner();

    var refIndex = s.trySkip('#') ? s.readUInt() : -1;

    if (refs.containsKey(refIndex) && !s.nextCharIs('>')) {
      throw s.fail("Encountered definition for SEXP that was already defined: " + refIndex);
    } else if (!refs.containsKey(refIndex) && refIndex != -1 && s.nextCharIs('>')) {
      throw s.fail("Encountered reference for SEXP that wasn't previously defined: " + refIndex);
    }

    return refIndex;
  }

  private ImmutableList<TaggedElem> parseList(Parser p) {
    var s = p.scanner();

    var elems = ImmutableList.<TaggedElem>builder();
    s.assertAndSkip('(');
    if (!s.trySkip(')')) {
      do {
        elems.add(p.parse(TaggedElem.class));

        if (s.nextCharsAre("...")) {
          throw failParsingTruncated(p);
        }
      } while (s.trySkip(','));
      s.assertAndSkip(')');
    }

    return elems.build();
  }

  @ParseMethod
  private Attributes parseAttributes(Parser p) {
    var s = p.scanner();

    var attrs = new Attributes.Builder();
    if (!s.nextCharSatisfies(SEXPParseContext::delimitsSEXP)) {
      if (s.nextCharsAre("...")) {
        throw failParsingTruncated(p);
      }

      do {
        var key = Names.read(s, true);
        s.assertAndSkip('=');
        var value = p.parse(SEXP.class);
        attrs.put(key, value);

        if (s.nextCharsAre("...")) {
          throw failParsingTruncated(p);
        }
      } while (s.trySkip(','));
    }
    return attrs.build();
  }

  @ParseMethod
  private TaggedElem parseTaggedElem(Parser p) {
    var s = p.scanner();

    if (s.nextCharSatisfies(SEXPParseContext::delimitsSEXP)) {
      return new TaggedElem(null, SEXPs.MISSING_ARG);
    }

    var tagOrValue = p.parse(SEXP.class);
    if (!s.trySkip('=')) {
      return new TaggedElem(null, tagOrValue);
    }

    if (!(tagOrValue instanceof RegSymSXP tag)) {
      throw s.fail("Expected tag name before '='");
    }
    var value =
        s.nextCharSatisfies(SEXPParseContext::delimitsSEXP)
            ? SEXPs.MISSING_ARG
            : p.parse(SEXP.class);
    return new TaggedElem(tag.name(), value);
  }

  /**
   * @see #forBindings()
   */
  public class ForBindings {
    @ParseMethod
    private ListSXP parseList(Parser p) {
      return SEXPs.list(SEXPParseContext.this.parseList(p));
    }

    @ParseMethod
    private TaggedElem parseTaggedElem(Parser p) {
      var s = p.scanner();

      if (s.nextCharSatisfies(SEXPParseContext::delimitsSEXP)) {
        return new TaggedElem(null, SEXPs.MISSING_ARG);
      }

      var tag = s.nextCharIs('=') ? null : Names.read(s, true);
      var value =
          s.trySkip('=')
              ? p.withContext(SEXPParseContext.this).parse(SEXP.class)
              : SEXPs.MISSING_ARG;
      return new TaggedElem(tag, value);
    }

    @ParseMethod
    private Object parse(Parser p, Class<?> clazz) {
      throw new UnsupportedOperationException(
          "SEXPParseContext#Bindings can only parse lists and tagged elements: given "
              + clazz.getName());
    }
  }

  private ParseException failParsingTruncated(Parser p) {
    return p.scanner()
        .fail(
            "Encountered SEXP that was truncated when printed. Only SEXPs printed with `SEXPPrintOptions#FULL` can be re-parsed.");
  }
}
