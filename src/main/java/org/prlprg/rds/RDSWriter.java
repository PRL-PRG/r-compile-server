package org.prlprg.rds;

import java.io.*;
import java.nio.charset.Charset;
import java.util.*;
import java.util.stream.DoubleStream;
import java.util.stream.StreamSupport;
import javax.annotation.Nullable;
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

  public static void writeFile(RSession session, File file, SEXP sexp) throws IOException {
    try (var output = new FileOutputStream(file)) {
      writeStream(session, output, sexp);
    }
  }

  public void writeHeader() throws IOException {
    // Could also be "B" (binary) and "A" (ASCII) but we only support XDR.
    // XDR just means big endian and DataInputStream/DataOutputStream from Java use BigEndian
    out.writeByte((byte) 'X');
    out.writeByte((byte) '\n');

    // Always write version 3 of the encoding
    // TODO: version 3 cannot be read because RDSReader does not support ALTREP
    out.writeInt(2);

    // Version of R for the writer
    out.writeInt(RVersion.LATEST_AWARE.encode());

    // Minimal version of R required to read back
    out.writeInt((new RVersion(3, 5, 0, null)).encode());
  }

  public void write(SEXP sexp) throws IOException {
    writeHeader();
    writeItem(sexp);
  }

  // See
  // https://github.com/wch/r-source/blob/65892cc124ac20a44950e6e432f9860b1d6e9bf4/src/main/serialize.c#L1021
  public void writeItem(SEXP s) throws IOException {
    var type = rdsType(s);

    // Persisted through the ref table? TODO

    switch (type) {
      case RDSItemType.Special special -> {
        // Save Special hooks: direct return and exit the function after a special hook
        out.writeInt(special.i());
      }
      case RDSItemType.Sexp sexp -> {
        // Already in the ref table? TODO

        switch (s) {
          case RegSymSXP sym -> writeSymbol(sym);
          case EnvSXP env -> writeEnv(env);

            // Dotted-pair (pairlist) objects
          case ListSXP list -> writeListSXP(list);
          case LangSXP lang -> writeLangSXP(lang);
          case PromSXP prom -> writePromSXP(prom);
          case CloSXP clo -> writeCloSXP(clo);

            // TODO: external pointer
            // TODO: weak reference

            // Other functions--special and builtin
          case SpecialSXP special -> writeSpecialSXP(special);
          case BuiltinSXP builtin -> writeBuiltinSXP(builtin);

            // Vectors
          case VectorSXP<?> vec -> writeVectorSXP(vec);

            // Bytecode
          case BCodeSXP bc -> writeBCode(bc);

          default -> throw new UnsupportedOperationException("Unsupported sexp type: " + s.type());
        }
      }
    }
  }

  // utility functions
  // ------------------------------------------------------------------------------------------------

  // Determines if the hastag bit should be set based on the SEXP
  private boolean hasTag(SEXP s) {
    return switch (s) {
        // TODO: ListSXP needs flags, are these handled by the loop?
      case CloSXP _clo -> true; // CloSXP should always be marked as having a tag I think
      case LangSXP _lang -> false; // FIXME: maybe wrong
      case PromSXP _prom -> false; // FIXME: maybe wrong
      default -> false; // by default (if it's not a dotted-pair type object), there is no tag
    };
  }

  // Determines if the hasAttr bit should be set based on the SEXP
  private boolean hasAttr(SEXP s) {
    return s.type()
            != SEXPType
                .CHAR // this should never be true because we represent CHARSXPs with strings,
        // right?
        && s.attributes() != null
        && !Objects.requireNonNull(s.attributes()).isEmpty();
  }

  // Determines the RDS item type associated with the provided SEXP
  private RDSItemType rdsType(SEXP s) {
    return switch (s) {
      case NilSXP _nil -> RDSItemType.Special.NILVALUE_SXP;
      case EmptyEnvSXP _empty -> RDSItemType.Special.EMPTYENV_SXP;
      case BaseEnvSXP _base -> RDSItemType.Special.BASEENV_SXP;
      case GlobalEnvSXP _global -> RDSItemType.Special.GLOBALENV_SXP;
      case SpecialSymSXP sexp when sexp == SEXPs.UNBOUND_VALUE ->
          RDSItemType.Special.UNBOUNDVALUE_SXP;
      case SpecialSymSXP sexp when sexp == SEXPs.MISSING_ARG -> RDSItemType.Special.MISSINGARG_SXP;

        // BaseNamespace not supported

      default -> new RDSItemType.Sexp(s.type());
    };
  }

  // Returns the general purpose flags associated with the provided SEXP.
  // FIXME: we should actually get the flags... not just null and false
  // However, there's no way to do this right now, since we have no representation of locked
  // environments (as far as
  // I know)
  private GPFlags gpFlags(SEXP sexp) {
    return new GPFlags(null, false);
  }

  // Returns the flags associated with the provided SEXP
  private Flags flags(SEXP s, int refIndex) {
    return new Flags(
        rdsType(s), new GPFlags(null, false), s.isObject(), hasAttr(s), hasTag(s), refIndex);
  }

  // Writes the provided flags to the stream
  private void writeFlags(Flags flags) throws IOException {
    out.writeInt(flags.encode());
  }

  // Writes the flags associated with the provided SEXP
  private void writeFlags(SEXP s, int refIndex) throws IOException {
    var flags = flags(s, refIndex);
    writeFlags(flags);
  }

  private void writeAttributes(@Nullable Attributes attrs) throws IOException {
    if (attrs == null || attrs.isEmpty()) {
      return;
    }
    // convert to ListSXP
    var l = attrs.entrySet().stream().map(e -> new TaggedElem(e.getKey(), e.getValue())).toList();
    // Write it
    writeItem(SEXPs.list(l));
  }

  private void writeChars(String s) throws IOException {
    // Never NA because we assume so
    // We only consider scalar Na strings
    var flags =
        new Flags(
            RDSItemType.valueOf(SEXPType.CHAR.i),
            // FIXME: will this cause issues if defaultCharset is not supported by RDS?
            new GPFlags(Charset.defaultCharset(), false),
            false,
            false,
            false,
            0);
    writeFlags(flags);
    out.writeInt(s.length());
    out.writeString(s);
  }

  // SEXP writing
  // -----------------------------------------------------------------------------------------------------

  private void writeEnv(EnvSXP env) throws IOException {
    refTable.add(env);
    // FIXME:
    var flags = flags(env, 0).getLevels().isLocked();
    switch (env) {
      case NamespaceEnvSXP namespace -> {
        out.writeInt(RDSItemType.Special.NAMESPACESXP.i());
        var namespaceInfo = SEXPs.string(namespace.getName(), namespace.getVersion());
        write(namespaceInfo);
        // TODO: needs tests
      }
      case UserEnvSXP userEnv -> {
        out.writeInt(SEXPType.ENV.i);
        out.writeInt(0); // FIXME: should be 1 if locked, 0 if not locked (bit 14 of gp)
        // Enclosure
        writeItem(userEnv.parent());
        // Frame
        writeItem(userEnv.frame());
        // Hashtab (NULL or VECSXP)
        writeItem(SEXPs.NULL); // simple version here.
        // Otherwise, we would have to actually do the hashing as it is done in R

        // Attributes
        // R always write something here, as it does not write a hastag bit in the flags
        // (it actually has no flags; it just writes the type ENV)
        if ((env.attributes() != null) && !Objects.requireNonNull(env.attributes()).isEmpty()) {
          writeAttributes(env.attributes());
        } else {
          writeItem(SEXPs.NULL);
        }
      }
      default -> {
        // An exception will be thrown for BaseEnvSXP, EmptyEnvSXP, and GlobalEnvSXP
        throw new UnsupportedOperationException("Unsupported env type: " + env.type());
      }
    }
  }

  private void writeSpecialSXP(SpecialSXP special) throws IOException {
    writeFlags(special, 0);
    var name = special.name();
    out.writeInt(name.length());
    out.writeString(special.name());
  }

  private void writeBuiltinSXP(BuiltinSXP builtin) throws IOException {
    writeFlags(builtin, 0);
    var name = builtin.name();
    out.writeInt(name.length());
    out.writeString(builtin.name());
  }

  // Writes a builtin SEXP (BuiltinSXP or SpecialSXP)
  // TODO: needs to be finished
  private void writeSpecialOrBuiltin(String name, boolean hasattr, Flags flags) throws IOException {
    // TODO: need to do something for hasattr?
    throw new RuntimeException("cannot write object of type" + flags.getType() + ": " + name);
    //    out.writeFlags(flags);
    //    out.writeInt(name.length());
    //    out.writeString(name);
  }

  private void writeListSXP(ListSXP lsxp) throws IOException {
    Flags flags = flags(lsxp, 0);
    boolean hasAttr = flags.hasAttributes();
    for (var el : lsxp) {
      var itemFlags =
          new Flags(
              RDSItemType.valueOf(lsxp.type().i),
              flags.getLevels(),
              flags.isObject(),
              hasAttr,
              el.tag() != null,
              0);
      writeFlags(itemFlags);
      if (el.tag() != null) {
        writeSymbol(el.tag());
      }
      writeItem(el.value());

      // we only want to write attributes for the first item, the rest will not have attributes
      hasAttr = false;
    }
    writeItem(SEXPs.NULL);
  }

  private void writeLangSXP(LangSXP lang) throws IOException {
    if (hasAttr(lang)) {
      writeAttributes(Objects.requireNonNull(lang.attributes()));
    }
    writeFlags(flags(lang, 0));
    writeItem(lang.fun());
    writeItem(lang.args());
  }

  private void writePromSXP(PromSXP prom) throws IOException {
    if (hasAttr(prom)) {
      writeAttributes(Objects.requireNonNull(prom.attributes()));
    }
    writeFlags(flags(prom, 0));
    // a promise has the value, expression and environment, in this order
    writeItem(prom.getVal());
    writeItem(prom.getExpr());
    writeItem(prom.getEnv());
  }

  private void writeCloSXP(CloSXP clo) throws IOException {
    if (hasAttr(clo)) {
      writeAttributes(Objects.requireNonNull(clo.attributes()));
    }
    writeFlags(flags(clo, 0));
    // a closure has the environment, formals, and then body
    writeItem(clo.env());
    writeItem(clo.formals());
    writeItem(clo.body());
  }

  private <T> void writeVectorSXP(VectorSXP<T> s) throws IOException {
    writeFlags(s, 0);
    out.writeInt(s.size());

    switch (s) {
      case VecSXP vec -> {
        // Write all the elements of the vec as individual items
        for (var val : vec) {
          writeItem(val);
        }
      }
      case ExprSXP exprs -> {
        // Write all the exprs to the stream as individual items
        for (var val : exprs) {
          writeItem(val);
        }
      }
      case IntSXP ints -> {
        // Write all the ints to the stream
        var vec = StreamSupport.stream(ints.spliterator(), false).mapToInt(i -> i).toArray();
        out.writeInts(vec);
      }
      case LglSXP lgls -> {
        // Write all the logicals to the stream as ints
        var vec =
            StreamSupport.stream(lgls.spliterator(), false).mapToInt(Logical::toInt).toArray();
        out.writeInts(vec);
      }
      case RealSXP reals -> {
        // Write all the reals to the stream as doubles
        var vec = StreamSupport.stream(reals.spliterator(), false).mapToDouble(d -> d).toArray();
        out.writeDoubles(vec);
      }
      case ComplexSXP cplxs -> {
        // For each complex number in the vector, add two doubles representing the real and
        // imaginary components via a flat map
        var doubles =
            StreamSupport.stream(cplxs.spliterator(), false)
                .flatMapToDouble(c -> DoubleStream.builder().add(c.real()).add(c.imag()).build())
                .toArray();
        out.writeDoubles(doubles);
      }
      case StrSXP strs -> {
        // For each string in the vector, we write its chars because
        for (String str : strs) {
          writeChars(str);
        }
      }

      default -> throw new RuntimeException("Unreachable: implemented in another branch.");
    }

    if (hasAttr(s)) {
      writeAttributes(Objects.requireNonNull(s.attributes()));
    }
  }

  private void scanForCircles(SEXP sexp, HashSet<SEXP> noBCodes) {
    switch (sexp) {
      case LangOrListSXP l -> {
        if (!noBCodes.contains(l)) {
          noBCodes.add(l);
          for (var e :
              switch (l) {
                case LangSXP lang -> lang.args();
                case ListSXP list -> list;
              }) {
            scanForCircles(e.value(), noBCodes);
          }
        }
      }
      case BCodeSXP bc -> {
        for (var e : bc.bc().consts()) {
          scanForCircles(e, noBCodes);
        }
      }
      default -> throw new RuntimeException("Unexpected sexp type: " + sexp.type());
    }
  }

  // FIXME: replace HashSet by HashTable, and store as value the reference number
  private void writeBCLang(SEXP s, HashSet<SEXP> reps) throws IOException {
    switch (s) {
      case LangOrListSXP l -> {
        if (!reps.contains((l))) {
          out.writeInt(RDSItemType.Special.BCREPDEF.i());

        } else {
          // already seen to we put the index
        }
        // TODO
      }
      default -> throw new UnsupportedOperationException("not implemented yet");
    }
    throw new UnsupportedOperationException("not implemented yet");
  }

  private void writeBC1(BCodeSXP s, HashSet<SEXP> reps) throws IOException {
    var code_bytes = s.bc().code().toRaw();
    writeItem(SEXPs.integer(code_bytes));

    var consts = s.bc().consts();
    out.writeInt(consts.size());

    // Iterate the constant pool and write the values
    for (var c : consts) {
      switch (c) {
        case BCodeSXP bc -> {
          out.writeInt(c.type().i);
          writeBC1(bc, reps);
        }
        case LangOrListSXP l -> {
          writeBCLang(l, reps);
        }
        default -> {
          out.writeInt(c.type().i);
          writeItem(c);
        }
      }
    }
  }

  private void writeBCode(BCodeSXP s) throws IOException {
    writeFlags(s, 0);

    // Scan for circles
    // prepend the result it with a scalar integer starting with 1
    var noBCodes = new HashSet<SEXP>();
    scanForCircles(s, noBCodes);
    out.writeInt(noBCodes.size() + 1);

    // Decode the bytecode (we will get a vector of integers)
    // write the vector of integers

    // write the number of consts in the bytecode
    // iterate the consts: if it s bytecode, write the type and recurse
    // if it is langsxp or listsxp,  write them , using the BCREDPEF, ATTRALANGSXP and ATTRLISTSXP
    // else write the type and the value

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
