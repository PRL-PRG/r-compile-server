package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import java.util.Optional;
import org.prlprg.bc.Bc;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrettyPrintWriter;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Logical;
import org.prlprg.primitive.Names;
import org.prlprg.util.UnreachableError;

/**
 * Maps potentially-recursive {@link SEXP}s to integers so they can be deserialized.
 *
 * <p>The class body also implements all of the logic for parsing SEXPs.
 */
class SEXPParseContext {
  private final Map<Integer, SEXP> refMap = new HashMap<>();

  @ParseMethod
  private SEXP parseSEXP(Parser p) {
    var s = p.scanner();

    if (s.trySkip('#')) {
      var refIndex = s.readUInt();
      var ref = refMap.get(refIndex);
      if (ref == null) {
        throw s.fail("Ref index used before it was defined (if at all): " + refIndex);
      }
      return ref;
    } else if (s.nextCharSatisfies(Names::isValidStartChar)) {
      // SymOrLangSXP
      SymOrLangSXP result = p.parse(SymSXP.class);
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
    } else if (s.trySkip('(')) {
      // ListSXP
      return SEXPs.list(parseList(p));
    } else if (s.nextCharSatisfies(Character::isJavaIdentifierStart)) {
      var name = s.readJavaIdentifierOrKeyword();
      return switch (name) {
        case "NULL" -> SEXPs.NULL;
        case "TRUE" -> SEXPs.TRUE;
        case "FALSE" -> SEXPs.FALSE;
        case "NA_LGL" -> SEXPs.NA_LOGICAL;
        case "NA_INT" -> SEXPs.NA_INTEGER;
        case "NA_REAL" -> SEXPs.NA_REAL;
        case "NA_CPLX" -> SEXPs.NA_COMPLEX;
        case "NA_STR" -> SEXPs.NA_STRING;
        default -> {
          if (name.startsWith("NA")) {
            throw s.fail("NA type (uppercase): NA_LGL, NA_INT, NA_REAL, NA_CPLX, NA_STR", name);
          } else {
            throw s.fail("Identifier isn't a known SEXP: " + name);
          }
        }
      };
    } else if (s.nextCharSatisfies(Character::isDigit)) {
      var decimal = s.readDecimalString();
      try {
        return decimal.contains(".")
            ? SEXPs.real(Double.parseDouble(decimal))
            : SEXPs.integer(Integer.parseInt(decimal));
      } catch (NumberFormatException e) {
        throw s.fail(
            "integer is too large to parse (or if its a real, I didn't know this was possible): "
                + decimal);
      }
    } else if (s.nextCharIs('"')) {
      return SEXPs.string(s.readQuoted('"'));
    } else if (s.trySkip('<')) {
      var type = s.runWithWhitespacePolicy(SkipWhitespace.NONE, () -> p.parse(SEXPOrEnvType.class));

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
              if (!s.trySkip("empty")) {
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
              var parameters = p.parse(ListSXP.class);
              s.assertAndSkip(" env=");
              var env = p.parse(EnvSXP.class);
              var attributes = s.trySkip(" |") ? p.parse(Attributes.class) : Attributes.NONE;
              s.assertAndSkip("⇒");
              var body = p.parse(SEXP.class);
              yield SEXPs.closure(parameters, body, env, attributes);
            }
            case EnvType.USER, EnvType.GLOBAL, EnvType.NAMESPACE, EnvType.BASE, EnvType.EMPTY -> {
              var refIndex = s.trySkip('#') ? s.readUInt() : -1;
              if (refMap.containsKey(refIndex)) {
                throw s.fail("Duplicate ref index: " + refIndex);
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

              var parent = s.trySkip("parent=") ? p.parse(EnvSXP.class) : null;
              var hasBindings = s.nextCharIs('(');

              var env =
                  switch ((EnvType) type) {
                    case EMPTY -> {
                      if (refIndex != -1) {
                        throw s.fail("Empty environment can't have ref index");
                      }
                      if (parent != null) {
                        throw s.fail("Empty environment can't have parent");
                      }
                      if (hasBindings) {
                        throw s.fail("Empty environment can't have bindings");
                      }
                      yield SEXPs.EMPTY_ENV;
                    }
                    case BASE -> {
                      if (parent != null) {
                        throw s.fail("Base environment can't have parent");
                      }
                      if (!hasBindings) {
                        throw s.fail("Base environment must have bindings");
                      }
                      yield new BaseEnvSXP();
                    }
                    case NAMESPACE -> {
                      if (parent == null) {
                        throw s.fail("Namespace environment must have parent");
                      }
                      if (!hasBindings) {
                        throw s.fail("Namespace environment must have bindings");
                      }
                      try {
                        yield new NamespaceEnvSXP(name, version, (StaticEnvSXP) parent);
                      } catch (ClassCastException e) {
                        throw s.fail("Static environment must have static parent", e);
                      }
                    }
                    case GLOBAL -> {
                      if (parent == null) {
                        throw s.fail("Global environment must have parent");
                      }
                      if (!hasBindings) {
                        throw s.fail("Global environment must have bindings");
                      }
                      try {
                        yield new GlobalEnvSXP((StaticEnvSXP) parent);
                      } catch (ClassCastException e) {
                        throw s.fail("Static environment must have static parent", e);
                      }
                    }
                    case USER -> {
                      if (parent == null) {
                        throw s.fail("User environment must have parent");
                      }
                      if (!hasBindings) {
                        throw s.fail("User environment must have bindings");
                      }
                      yield new UserEnvSXP(parent);
                    }
                  };

              if (refIndex != -1) {
                refMap.put(refIndex, env);
              }

              if (hasBindings) {
                var bindings = parseList(p);
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
                s.assertAndSkip('(');
                var first = true;
                while (!s.trySkip(')')) {
                  if (!first) {
                    s.assertAndSkip(',');
                  }
                  var key = Names.read(s, true);
                  s.assertAndSkip('=');
                  var value = p.parse(SEXP.class);
                  env.set(key, value);
                }
              }

              yield env;
            }
            case SEXPType.ENV ->
                throw s.fail("ENV SEXP must have a specific type (one of the `EnvType` instances)");
            case SEXPType.BCODE -> {
              var bc = p.parse(Bc.class);
              yield SEXPs.bcode(bc);
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

      s.trySkip('>');
      return base;
    } else {
      throw s.fail("Unexpected start of SEXP: " + Character.toString(s.peekChar()));
    }
  }

  private ImmutableList<TaggedElem> parseList(Parser p) {
    var s = p.scanner();

    var elems = ImmutableList.<TaggedElem>builder();
    if (!s.trySkip(')')) {
      do {
        elems.add(p.parse(TaggedElem.class));
      } while (s.trySkip(','));
      s.assertAndSkip(')');
    }

    return elems.build();
  }

  @ParseMethod
  private SymSXP parseSymSXP(Parser p) {
    var s = p.scanner();
    var name = Names.read(s, true);

    return name.equals("...") ? SEXPs.DOTS_SYMBOL : new RegSymSXP(name);
  }
}

/**
 * Maps potentially-recursive {@link SEXP}s to integers to they can be serialized.
 *
 * <p>The class body also implements all of the logic for printing SEXPs.
 */
class SEXPPrintContext {
  private final Map<SEXP, Integer> refs = new HashMap<>();

  // `NilSXP` and `SymSXP` print themselves via `toString()` because they are constants

  @PrintMethod
  private void print(LangSXP sexp, Printer p) {
    var w = p.writer();

    if (sexp.funNameIs("{")) {
      if (sexp.args().isEmpty()) {
        w.write("{}");
      } else {
        w.write('{');
        w.runIndented(
            () -> {
              w.write('\n');
              var first = true;
              for (var arg : sexp.args()) {
                if (!first) {
                  w.write(";\n");
                }
                p.print(arg);
                first = false;
              }
            });
        w.write("\n}");
      }
    } else {
      p.print(sexp.fun());
      p.print(sexp.args());
    }
  }

  @PrintMethod
  private void print(ListSXP sexp, Printer p) {
    if (sexp.hasAttributes()) {
      printGeneralStart(sexp.type(), p);
      printList(sexp, p);
      printAttributes(sexp, p);
      printGeneralEnd(p);
    } else {
      printList(sexp, p);
    }
  }

  @PrintMethod
  private void print(VectorSXP<?> sexp, Printer p) {
    printGeneralStart(sexp.type(), p);
    printElems(sexp, p);
    printAttributes(sexp, p);
    printGeneralEnd(p);
  }

  @PrintMethod
  private void print(CloSXP sexp, Printer p) {
    var w = p.writer();

    printGeneralStart(sexp.type(), p);
    p.print(sexp.parameters());
    w.write(" env=");
    w.runIndented(() -> p.print(sexp.env()));
    printAttributes(sexp, p);
    w.write(" ⇒ ");
    w.runIndented(() -> p.print(sexp.body()));
    printGeneralEnd(p);
  }

  @PrintMethod
  private void print(EnvSXP sexp, Printer p) {
    var w = p.writer();

    if (refs.containsKey(sexp)) {
      w.write('#');
      p.print(refs.get(sexp));
      return;
    }

    w.write('<');
    p.print(sexp.envType());
    if (!(sexp instanceof EmptyEnvSXP)) {
      w.write('#');
      p.print(refs.size());
      refs.put(sexp, refs.size());
    }
    w.write(' ');
    if (sexp instanceof NamespaceEnvSXP ns) {
      w.write(Names.quoteIfNecessary(ns.name()));
      w.write(':');
      w.write(ns.version());
    }
    if (!(sexp instanceof EmptyEnvSXP)) {
      w.write(" parent=");
      w.runIndented(() -> p.print(sexp.parent()));
    }
    printList(sexp.bindingsAsTaggedElems(), p);
    printAttributes(sexp, p);
    printGeneralEnd(p);
  }

  @PrintMethod
  private void print(BCodeSXP sexp, Printer p) {
    printGeneralStart(sexp.type(), p);
    p.print(sexp.bc());
    printGeneralEnd(p);
  }

  @PrintMethod
  private void print(PromSXP sexp, Printer p) {
    var w = p.writer();

    printGeneralStart(sexp.type(), p);
    w.write("env=");
    w.runIndented(() -> p.print(sexp.env()));
    if (sexp.isEvaluated()) {
      w.write(" val=");
      w.runIndented(() -> p.print(sexp.val()));
    }
    w.write(" ⇒ ");
    w.runIndented(() -> p.print(sexp.expr()));
    printGeneralEnd(p);
  }

  @PrintMethod
  private void print(BuiltinOrSpecialSXP sexp, Printer p) {
    printGeneralStart(sexp.type(), p);
    p.print(sexp.id());
    printGeneralEnd(p);
  }

  private void printGeneralStart(SEXPType type, Printer p) {
    var w = p.writer();

    w.write('<');
    p.print(type);
    w.write(' ');
  }

  private void printAttributes(SEXP sexp, Printer p) {
    var w = p.writer();

    if (sexp.hasAttributes()) {
      w.write(" | ");
      w.runIndented(
          PrettyPrintWriter.DEFAULT_INDENT * 2,
          () -> p.print(Objects.requireNonNull(sexp.attributes())));
    }
  }

  private void printGeneralEnd(Printer p) {
    p.writer().write('>');
  }

  private void printList(Iterable<TaggedElem> list, Printer p) {
    var w = p.writer();

    w.write("(");
    printElems(list, p);
    w.write(")");
  }

  private void printElems(Iterable<?> list, Printer p) {
    var w = p.writer();

    w.runIndented(
        () -> {
          var first = true;
          for (var elem : list) {
            if (!first) {
              w.write(", ");
            }
            p.print(elem);
            first = false;
          }
        });
  }
}
