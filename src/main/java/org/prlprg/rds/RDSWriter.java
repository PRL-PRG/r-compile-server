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

  public void writeheader(SEXP sexp) throws IOException {
    // Could also be "X" (XDR) and "A" (ASCII) but we only support binary
    out.writeByte((byte) 'B');
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
    throw new UnsupportedOperationException("not implemented yet");
  }

  // See
  // https://github.com/wch/r-source/blob/65892cc124ac20a44950e6e432f9860b1d6e9bf4/src/main/serialize.c#L1021
  public void writeItem(SEXP s) throws IOException {
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
      refTable.add(s);
      out.writeByte((byte) SEXPType.SYM.ordinal());
      // write the name (cannot be NA)
      out.writeInt(sym.name().length());
      out.writeString(sym.name());
    } else if (s.type() == SEXPType.ENV) {
      refTable.add(s);

      // Package
      // TODO: add PackageEnv to the EnvSXP interface
      StrSXP name = (StrSXP) Objects.requireNonNull(s.attributes()).get("name");
      assert name != null;
      if (name.get(0).startsWith("package:")) {
        out.writeInt(RDSItemType.Special.PACKAGESXP.ordinal());
        writeItem(name);
      } // Namespace
      else if (s instanceof NamespaceEnvSXP) {
        out.writeInt(RDSItemType.Special.NAMESPACESXP.ordinal());
        // TODO: build STRSXP with name and version
        throw new UnsupportedOperationException("not implemented yet");
      } else { // Any other env
        out.writeInt(SEXPType.ENV.ordinal());
        out.writeInt(0); // FIXME: should be 1 if locked, 0 if not locked
        // Enclosure
        // Frame
        // Hashtab
        // Attributes
      }
    } else {
      int hastag =
          switch (s.type()) {
            case LIST, LANG, PROM -> {
              yield 0;
            } // we assume no tag
            case CLO -> {
              yield 1;
            }
            default -> {
              yield 0;
            }
          };
      // Flags
      int hasattr = s.type() != SEXPType.CHAR && s.attributes() != null ? 1 : 0;
      // levels in the sxpinfo gp field
      int flags = packFlags(s.type().ordinal(), 0, s.isObject() ? 1 : 0, hasattr, hastag);
      out.writeInt(flags);

      switch (s) {
        case ListSXP l -> writeDottedPairObjects(l, hasattr == 1);
        case LangSXP l -> writeDottedPairObjects(l, hasattr == 1);
        case PromSXP p -> writeDottedPairObjects(p, hasattr == 1);
        case CloSXP c -> writeDottedPairObjects(c, hasattr == 1);
          // External pointer
          // weakreference
          // special
          // builtin
        case StrSXP str -> writeStrSxp(str, hasattr == 1);
        case VectorSXP vec -> writeVector(vec, hasattr == 1);
        case BCodeSXP bcode -> writeBCode(bcode);

        default -> throw new UnsupportedOperationException("Unsupported SEXP type: " + s.type());
      }
    }

    throw new UnsupportedOperationException("not implemented yet");
  }

  // Handles LISTSXP (pairlist, LANGSXP, PROMSXP and DOTSXP
  private void writeDottedPairObjects(SEXP s, boolean hasattr) throws IOException {
    // first, attributes
    if (hasattr) {
      writeAttributes(s.attributes());
    }

    // tag (except for closures
    // TODO

    // car
    switch (s) {
      case LangSXP l -> {
        for (var i : l.asList()) {
          writeItem(i);
        }
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

  private int packFlags(int type, int levs, int isobj, int hasattr, int hastag) {
    throw new UnsupportedOperationException("not implemented yet");
  }

  private void writeAttributes(Attributes attrs) throws IOException {
    throw new UnsupportedOperationException("not implemented yet");
  }

  private void writeChars(String s) throws IOException {
    // Never NA because we assume so
    // We only consider scalar Na strings
    out.writeInt(s.length());
    out.writeString(s);
  }

  private void writeStrSxp(StrSXP s, boolean hasattr) throws IOException {
    out.writeInt(s.size());
    for (var str : s) {
      writeChars(str);
    }

    if (hasattr) {
      writeAttributes(Objects.requireNonNull(s.attributes()));
    }
  }

  private void writeVector(VectorSXP s, boolean hasattr) throws IOException {
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

  private void writeBCode(BCodeSXP s) throws IOException {
    throw new UnsupportedOperationException("not implemented yet");
  }

  @Override
  public void close() throws IOException {
    out.close();
  }
}
