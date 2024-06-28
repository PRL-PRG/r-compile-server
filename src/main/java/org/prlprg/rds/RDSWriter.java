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

// TODO: properly add and retrieve from ref table

public class RDSWriter implements Closeable {
  // Print debug information of data read from the stream?
  private final boolean DEBUG = true;

  private final RDSOutputStream out;
  private final List<SEXP> refTable = new ArrayList<>(128);

  protected RDSWriter(OutputStream out) {
    this.out =
        Boolean.parseBoolean(System.getenv("VERBOSE"))
            ? new RDSOutputStreamVerbose(out)
            : new RDSOutputStream(out);
  }

  public static void writeStream(RSession session, OutputStream output, SEXP sexp)
      throws IOException {
    try (var writer = new RDSWriter(output)) {
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
          case BuiltinOrSpecialSXP bos -> writeBuiltinOrSpecialSXP(bos);

            // Vectors
          case VectorSXP<?> vec -> writeVectorSXP(vec);

            // Bytecode
          case BCodeSXP bc -> writeByteCode(bc);

          default -> throw new UnsupportedOperationException("Unsupported sexp type: " + s.type());
        }
      }
    }
  }

  // utility functions ----------------------------------------------------------------------------

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
  // environments (as far as I know) and no SEXPs that need a charset (verify this for
  // SymSXP, etc.)
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

  // FIXME: sort of duplicate method, get rid of this (keep hasAttr)
  private boolean hasAttrs(@Nullable Attributes attrs) {
    return attrs != null && !Objects.requireNonNull(attrs).isEmpty();
  }

  private void writeAttributes(@Nullable Attributes attrs) throws IOException {
    if (!hasAttrs(attrs)) return;
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
            // FIXME: this should include the logic from platform.c (see rds-reader)
            new GPFlags(Charset.defaultCharset(), false),
            false,
            false,
            false,
            0);
    writeFlags(flags);
    out.writeInt(s.length());
    out.writeString(s);
  }

  // SEXP writing ---------------------------------------------------------------------------------

  private void writeEnv(EnvSXP env) throws IOException {
    refTable.add(env);
    var flags = flags(env, 0).getLevels().isLocked();
    switch (env) {
      case NamespaceEnvSXP namespace -> {
        out.writeInt(RDSItemType.Special.NAMESPACESXP.i());
        var namespaceInfo = SEXPs.string(namespace.name(), namespace.version());
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
        if (hasAttrs(env.attributes())) {
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

  private void writeBuiltinOrSpecialSXP(BuiltinOrSpecialSXP bos) throws IOException {
    writeFlags(bos, 0);
    var name = bos.id().name();
    out.writeInt(name.length());
    out.writeString(name);
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
        writeRegSymbol(el.tag());
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
    writeItem(prom.val());
    writeItem(prom.expr());
    writeItem(prom.env());
  }

  private void writeCloSXP(CloSXP clo) throws IOException {
    if (hasAttr(clo)) {
      writeAttributes(Objects.requireNonNull(clo.attributes()));
    }
    writeFlags(flags(clo, 0));
    // a closure has the environment, formals, and then body
    writeItem(clo.env());
    writeItem(clo.parameters());
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

  private void scanForCircles(SEXP sexp, HashMap<SEXP, Integer> reps, HashSet<SEXP> seen) {
    switch (sexp) {
      case LangOrListSXP lol -> {
        if (seen.contains(lol)) {
          // Add to reps if the cell has already been seen
          // We put -1 for the time being so that we can update reps in the correct order later
          reps.put(lol, -1);
          return;
        }
        // Otherwise, add to seen and scan recursively
        seen.add(lol);

        switch (lol) {
          case LangSXP lang -> {
            // For LangSXP, we want to scan both the function and the arg values
            scanForCircles(lang.fun(), reps, seen);
            lang.args().values().forEach((el) -> scanForCircles(el, reps, seen));
          }
          case ListSXP list -> {
            // For ListSXP, we scan the values
            list.values().forEach((el) -> scanForCircles(el, reps, seen));
          }
        }
      }
      case BCodeSXP bc -> {
        // For bytecode, we scan the constant pool
        bc.bc().consts().forEach((el) -> scanForCircles(el, reps, seen));
      }
      default -> {
        // do nothing
      }
    }
  }

  // HACK: nextRepIndex is an array because we need to pass it by reference, but it only has one
  // element
  private void writeByteCodeLang(SEXP s, HashMap<SEXP, Integer> reps, int[] nextRepIndex)
      throws IOException {
    if (s instanceof LangOrListSXP lol && lol.type() != SEXPType.NIL) {
      var assignedRepIndex = reps.get(lol);
      if (assignedRepIndex != null) {
        if (assignedRepIndex == -1) {
          // If the rep is present in the map but is -1, this is our first time seeing it, so we
          // emit a BCREPDEF and update the counter
          int newIndex = nextRepIndex[0]++;
          reps.put(lol, newIndex);
          out.writeInt(RDSItemType.Special.BCREPDEF.i());
          out.writeInt(newIndex);
        } else {
          // If the rep is present with an index other than -1, we have already seen it, so we
          // emit a BCREPREF with the reference index.
          out.writeInt(RDSItemType.Special.BCREPREF.i());
          out.writeInt(assignedRepIndex);
          // We also return, since the child nodes have already been written, and we don't want
          // to write them again
          return;
        }
      }

      var type = RDSItemType.valueOf(lol.type().i);

      // if the item has attributes, we use the special types ATTRLANGSXP and ATTRLISTSXP instead
      // of LangSXP and ListSXP. This is done to preserve information on expressions in the
      // constant pool of byte code objects.
      var attrs = lol.attributes();
      if (hasAttrs(attrs)) {
        type =
            switch (lol) {
              case LangSXP _lang -> RDSItemType.Special.ATTRLANGSXP;
              case ListSXP _list -> RDSItemType.Special.ATTRLISTSXP;
            };
      }
      out.writeInt(type.i());
      writeAttributes(attrs);

      switch (lol) {
          // For a LangSXP, recursively write the function and args
        case LangSXP lang -> {
          // The tag of a LangSXP is always null (I think)
          writeItem(SEXPs.NULL);
          // write head
          writeByteCodeLang(lang.fun(), reps, nextRepIndex);
          // write tail
          writeByteCodeLang(lang.args(), reps, nextRepIndex);
        }
          // For a ListSXP, recursively write the elements
        case ListSXP list -> {
          // there will always be a first element because we take a different path when the list
          // is empty
          var first = list.stream().findFirst().orElseThrow();
          SEXP tag = first.tag() == null ? SEXPs.NULL : SEXPs.symbol(first.tag());

          // write tag
          writeItem(tag);
          // write head
          writeByteCodeLang(list.value(0), reps, nextRepIndex);
          // write tail
          writeByteCodeLang(list.subList(1), reps, nextRepIndex);
        }
      }
    } else { // Print a zero as padding and write the item normally
      out.writeInt(0);
      writeItem(s);
    }
  }

  private void writeByteCode1(BCodeSXP s, HashMap<SEXP, Integer> reps, int[] nextRepIndex)
      throws IOException {
    // Decode the bytecode (we will get a vector of integers)
    // write the vector of integers
    var encoder = new GNURByteCodeEncoderFactory(s.bc().code());
    var code_bytes = encoder.buildRaw();
    writeItem(SEXPs.integer(code_bytes));
    writeByteCodeConsts(s, reps, nextRepIndex);
  }

  private void writeByteCodeConsts(BCodeSXP s, HashMap<SEXP, Integer> reps, int[] nextRepIndex)
      throws IOException {
    // write the number of consts in the bytecode
    // iterate the consts: if it s bytecode, write the type and recurse
    // if it is langsxp or listsxp,  write them , using the BCREDPEF, ATTRALANGSXP and ATTRLISTSXP
    // else write the type and the value
    var consts = s.bc().consts();
    out.writeInt(consts.size());

    // Iterate the constant pool and write the values
    for (var c : consts) {
      switch (c) {
        case BCodeSXP bc -> {
          out.writeInt(c.type().i);
          writeByteCode1(bc, reps, nextRepIndex);
        }
        case LangOrListSXP l -> {
          // writeBCLang writes the type i
          writeByteCodeLang(l, reps, nextRepIndex);
        }
        default -> {
          out.writeInt(c.type().i);
          writeItem(c);
        }
      }
    }
  }

  private void writeByteCode(BCodeSXP s) throws IOException {
    writeFlags(s, 0);

    // Scan for circles
    // prepend the result it with a scalar integer starting with 1
    // FIXME: why is the same(?) bytecode being scanned multiple times? Is this supposed to happen?
    var reps = new HashMap<SEXP, Integer>();
    var seen = new HashSet<SEXP>();
    scanForCircles(s, reps, seen);
    out.writeInt(reps.size() + 1);

    var nextRepIndex = new int[] {0};
    writeByteCode1(s, reps, nextRepIndex);
  }

  private void writeSymbol(SymSXP s) throws IOException {
    switch (s) {
      case RegSymSXP regSymSXP -> writeRegSymbol(regSymSXP);
      case SpecialSymSXP specialSymSXP when specialSymSXP.isEllipsis() -> {
        out.writeByte((byte) SEXPType.SYM.i);
        writeChars("..."); // Really?
      }
      default ->
          throw new UnsupportedOperationException("Unreachable: implemented in special sexps.");
    }
  }

  private void writeRegSymbol(RegSymSXP s) throws IOException {
    refTable.add(s);
    writeRegSymbol(s.name());
  }

  private void writeRegSymbol(String s) throws IOException {
    out.writeInt(SEXPType.SYM.i);
    writeChars(s);
  }

  @Override
  public void close() throws IOException {
    out.close();
  }
}
