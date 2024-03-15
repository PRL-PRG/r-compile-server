package org.prlprg.rds;

import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;
import java.util.stream.StreamSupport;
import org.prlprg.RSession;
import org.prlprg.RVersion;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.*;

public class RDSWriter implements Closeable {
  private final RSession session;
  private final RDSOutputStream out;
  private final List<SEXP> refTable = new ArrayList<>(128);

  public static final int IS_OBJECT_BIT_MASK = 1 << 8;
  public static final int HAS_ATTR_BIT_MASK = 1 << 9;
  public static final int HAS_TAG_BIT_MASK = 1 << 10;

  private RDSWriter(RSession session, OutputStream out) {
    this.session = session;
    this.out = new RDSOutputStream(out);
  }

  public static void writeStream(RSession session, OutputStream output, SEXP sexp)
      throws IOException {
    try (var writer = new RDSWriter(session, output)) {
      writer.write(sexp);
    }
  }

  public static void writeFile(RSession session, File file, SEXP sexp) throws IOException {
    try (var output = new FileOutputStream(file)) {
      writeStream(session, output, sexp);
    }
  }

  public void writeheader(SEXP sexp) throws IOException {
    // Could also be "B" (binary) and "A" (ASCII) but we only support XDR.
    // XDR just means big endian and DataInputStream/DataOutputStream from Java use BigEndian
    out.writeByte((byte) 'X');
    out.writeByte((byte) '\n');

    // Always write version 3 of the encoding
    out.writeInt(3);

    // Version of R for the writer
    out.writeInt(RVersion.LATEST_AWARE.encode());

    // Minimal version of R required to read back
    out.writeInt((new RVersion(3, 5, 0, null)).encode());

    // Charset. Always UTF-8.
    var nativeEncoding = StandardCharsets.UTF_8.name();
    out.writeInt(nativeEncoding.length());
    out.writeString(nativeEncoding);
  }

  public void write(SEXP sexp) throws IOException {
    writeheader(sexp);
    writeItem(sexp);
  }

  // See
  // https://github.com/wch/r-source/blob/65892cc124ac20a44950e6e432f9860b1d6e9bf4/src/main/serialize.c#L1021
  public void writeItem(SEXP s) throws IOException {
    // TODO: write the flags at the beginning.

    // ALTREP: TODO

    // Persisted through the ref table? TODO

    // Save Special hooks: direct return and exit the function after a special hook
    switch (s) {
      case NilSXP _nil -> {
        out.writeInt(RDSItemType.Special.NILVALUE_SXP.i());
        return;
      }
      case EmptyEnvSXP _empty -> {
        out.writeInt(RDSItemType.Special.EMPTYENV_SXP.i());
        return;
      }

      case BaseEnvSXP _base -> {
        out.writeInt(RDSItemType.Special.BASEENV_SXP.i());
        return;
      }

      case GlobalEnvSXP _global -> {
        out.writeInt(RDSItemType.Special.GLOBALENV_SXP.i());
        return;
      }

      case SpecialSymSXP sexp when sexp == SEXPs.UNBOUND_VALUE -> {
        out.writeInt(RDSItemType.Special.UNBOUNDVALUE_SXP.i());
        return;
      }

      case SpecialSymSXP sexp when sexp == SEXPs.MISSING_ARG -> {
        out.writeInt(RDSItemType.Special.MISSINGARG_SXP.i());
        return;
      }

        // BaseNamespace not supported

      default -> {
        // continue
      }
    }

    // Already in the ref table? TODO

    // Symbols
    if (s instanceof RegSymSXP sym) {
      writeSymbol(sym);
    } else if (s.type() == SEXPType.ENV) {
      refTable.add(s);

      // Package
      // TODO: add PackageEnv to the EnvSXP interface
      StrSXP name = (StrSXP) Objects.requireNonNull(s.attributes()).get("name");
      assert name != null;
      if (name.get(0).startsWith("package:")) {
        out.writeInt(RDSItemType.Special.PACKAGESXP.i());
        writeItem(name);
      } // Namespace
      else if (s instanceof NamespaceEnvSXP) {
        out.writeInt(RDSItemType.Special.NAMESPACESXP.i());
        // TODO: build STRSXP with name and version
        throw new UnsupportedOperationException("not implemented yet");
      } else { // Any other env
        out.writeInt(SEXPType.ENV.i);
        out.writeInt(0); // FIXME: should be 1 if locked, 0 if not locked
        assert s instanceof UserEnvSXP;
        // TODO
        // Enclosure
        // Frame
        // Hashtab
        // Attributes
        writeAttributes(s.attributes());
      }
    } else {
      boolean hastag =
          switch (s.type()) {
            case LIST, LANG, PROM -> false; // we assume no tag (will be corrected later for List)
            case CLO -> true;
            default -> false;
          };
      // Flags
      boolean hasattr =
          s.type() != SEXPType.CHAR
              && s.attributes() != null
              && !Objects.requireNonNull(s.attributes()).isEmpty();
      // levels in the sxpinfo gp field

      var rds_type = new RDSItemType.Sexp(s.type());
      var flags = new Flags(rds_type, 0, false, s.isObject(), hasattr, hastag, 0);

      switch (s) {
        case ListSXP l -> writeDottedPairObjects(l, hasattr, flags);
        case LangSXP l -> writeDottedPairObjects(l, hasattr, flags);
        case PromSXP p -> writeDottedPairObjects(p, hasattr, flags);
        case CloSXP c -> writeDottedPairObjects(c, hasattr, flags);
          // External pointer
          // weakreference
          // special
          // builtin
        case StrSXP str -> writeStrSxp(str, hasattr, flags.encode());
        case VectorSXP vec -> writeVector(vec, hasattr, flags.encode());
        case BCodeSXP bcode -> writeBCode(bcode, flags.encode());

        default -> throw new UnsupportedOperationException("Unsupported SEXP type: " + s.type());
      }
    }
  }

  // Handles LISTSXP (pairlist, LANGSXP, PROMSXP and DOTSXP
  private void writeDottedPairObjects(SEXP s, boolean hasattr, Flags flags) throws IOException {
    if (s instanceof ListSXP l && !l.isEmpty() && l.get(0).tag() != null) {
      var new_flags =
          new Flags(flags.getType(), 0, flags.isUTF8(), flags.isObject(), false, true, 0);
      out.writeInt(new_flags.encode());
    } else {
      out.writeInt(flags.encode());
    }
    // We should write the flag here first
    // first, attributes
    if (hasattr) {
      writeAttributes(Objects.requireNonNull(s.attributes()));
    }

    switch (s) {
      case LangSXP l -> {
        // write the fun
        writeItem(l.fun());
        // write the args
        writeItem(l.args());
      }
      case ListSXP l -> {
        int i = 0;
        for (var e : l) {
          if (i > 0) {
            var new_flags =
                new Flags(
                    flags.getType(),
                    0,
                    flags.isUTF8(),
                    flags.isObject(),
                    false,
                    e.tag() != null,
                    0);
            out.writeInt(new_flags.encode());
          }

          if (e.tag() != null) {
            writeSymbol(e.tag());
          }
          writeItem(e.value());
          i++;
        }
        writeItem(SEXPs.NULL);
      }
      case PromSXP p -> {
        // a promise has the value, expression and environment, in this order
        writeItem(p.getVal());
        writeItem(p.getExpr());
        writeItem(p.getEnv());
      }
      case CloSXP c -> {
        // a closure has the environment, formals, and then body
        writeItem(c.env());
        writeItem(c.formals());
        writeItem(c.body());
      }
      default -> throw new RuntimeException("Unreachable");
    }
  }

  private int packFlags(int type, int levs, boolean isobj, boolean hasattr, boolean hastag) {
    int val = type;
    val |= levs << 12;
    if (isobj) {
      val |= IS_OBJECT_BIT_MASK;
    }
    if (hasattr) {
      val |= HAS_ATTR_BIT_MASK;
    }
    if (hastag) {
      val |= HAS_TAG_BIT_MASK;
    }

    return val;
  }

  private void writeAttributes(Attributes attrs) throws IOException {

    // convert to ListSXP
    var l = attrs.entrySet().stream().map(e -> new TaggedElem(e.getKey(), e.getValue())).toList();
    // Write it
    writeItem(SEXPs.list(l));
  }

  private void writeChars(String s) throws IOException {
    // Never NA because we assume so
    // We only consider scalar Na strings
    int flags = packFlags(SEXPType.CHAR.i, 0, false, false, false);
    out.writeInt(flags);
    out.writeInt(s.length());
    out.writeString(s);
  }

  private void writeStrSxp(StrSXP s, boolean hasattr, int flags) throws IOException {
    out.writeInt(flags);
    out.writeInt(s.size());
    for (var str : s) {
      writeChars(str);
    }

    if (hasattr) {
      writeAttributes(Objects.requireNonNull(s.attributes()));
    }
  }

  private <T> void writeVector(VectorSXP<T> s, boolean hasattr, int flags) throws IOException {
    out.writeInt(flags);
    out.writeInt(s.size());

    switch (s) {
      case VecSXP vec -> {
        for (var val : vec) {
          writeItem(val);
        }
      }
      case ExprSXP expr -> {
        for (var val : expr) {
          writeItem(val);
        }
      }
      case IntSXP intVec -> {
        var vec = StreamSupport.stream(intVec.spliterator(), false).mapToInt(i -> i).toArray();
        out.writeInts(vec);
      }
      case LglSXP lglSXP -> {
        var vec =
            StreamSupport.stream(lglSXP.spliterator(), false).mapToInt(Logical::toInt).toArray();
        out.writeInts(vec);
      }
      case RealSXP realSXP -> {
        var vec = StreamSupport.stream(realSXP.spliterator(), false).mapToDouble(d -> d).toArray();
        out.writeDoubles(vec);
      }

      case ComplexSXP _complexSXP -> {
        throw new UnsupportedOperationException("not implemented yet");
      }

      default -> throw new RuntimeException("Unreachable: implemented in another branch.");
    }

    if (hasattr) {
      writeAttributes(Objects.requireNonNull(s.attributes()));
    }
  }

  private void writeBCode(BCodeSXP s, int flags) throws IOException {
    out.writeInt(flags);
    throw new UnsupportedOperationException("not implemented yet");
  }

  private void writeSymbol(SymSXP s) throws IOException {
    switch (s) {
      case RegSymSXP regSymSXP -> writeSymbol(regSymSXP);
      case SpecialSymSXP specialSymSXP when specialSymSXP.isEllipsis() -> {
        out.writeByte((byte) SEXPType.SYM.i);
        writeChars("..."); // Really?
      }
      default ->
          throw new UnsupportedOperationException("Unreachable: implemented in special sexps.");
    }
  }

  private void writeSymbol(RegSymSXP s) throws IOException {
    refTable.add(s);
    writeSymbol(s.name());
  }

  private void writeSymbol(String s) throws IOException {
    out.writeInt(SEXPType.SYM.i);
    writeChars(s);
  }

  @Override
  public void close() throws IOException {
    out.close();
  }
}
