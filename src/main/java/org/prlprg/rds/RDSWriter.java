package org.prlprg.rds;

import java.io.*;
import java.nio.charset.Charset;
import java.util.*;
import java.util.stream.DoubleStream;
import java.util.stream.StreamSupport;
import org.prlprg.RVersion;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.*;

public class RDSWriter implements Closeable {
  private final RDSOutputStream out;
  // refIndex is 1-based, so the first ref will have index 1
  private int refIndex = 1;
  private final HashMap<SEXP, Integer> refTable = new HashMap<>(128);

  protected RDSWriter(OutputStream out) {
    this.out =
        Boolean.parseBoolean(System.getenv("VERBOSE"))
            ? new RDSOutputStreamVerbose(out)
            : new RDSOutputStream(out);
  }

  public static void writeStream(OutputStream output, SEXP sexp) throws IOException {
    try (var writer = new RDSWriter(output)) {
      writer.write(sexp);
    }
  }

  public static void writeFile(File file, SEXP sexp) throws IOException {
    try (var output = new FileOutputStream(file)) {
      writeStream(output, sexp);
    }
  }

  public void writeHeader() throws IOException {
    // Could also be "B" (binary) and "A" (ASCII) but we only support XDR.
    // XDR just means big endian and DataInputStream/DataOutputStream from Java use BigEndian
    out.writeByte((byte) 'X');
    out.writeByte((byte) '\n');

    // Write version 2 of the encoding, since we want the writer to align with the reader and
    // the reader does not support ALTREP
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

  /**
   * See <a
   * href="https://github.com/wch/r-source/blob/65892cc124ac20a44950e6e432f9860b1d6e9bf4/src/main/serialize.c#L1021">GNU-R
   * serialize.c</a>.
   */
  public void writeItem(SEXP s) throws IOException {
    var type = rdsType(s);

    // Persisted through the ref table? TODO

    switch (type) {
      case RDSItemType.Special special -> {
        // Save Special hooks: direct return and exit the function after a special hook
        out.writeInt(special.i());
      }
      case RDSItemType.Sexp sexp -> {
        // If refIndex is greater than 0, the object has already been written so we can
        // write a reference (since the index is 1-based)
        int sexpRefIndex = refTable.getOrDefault(s, 0);
        if (sexpRefIndex > 0) {
          writeRef(sexpRefIndex);
          return;
        }

        // Otherwise, write the sexp as normal
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

  /** Adds {@code s} to the ref table. */
  private void refAdd(SEXP s) {
    refTable.put(s, refIndex++);
  }

  /** Determines if the hastag bit should be set based on the SEXP. */
  private boolean hasTag(SEXP s) {
    // ListSXP flags are handled elsewhere since they're written per-element
    return switch (s) {
      case CloSXP _clo -> true; // CloSXP should always be marked as having a tag I think
      case LangSXP _lang -> false; // FIXME: maybe wrong
      case PromSXP _prom -> false; // FIXME: maybe wrong
      default -> false; // by default (if it's not a dotted-pair type object), there is no tag
    };
  }

  /** Determines if the hasAttr bit should be set based on the SEXP. */
  private boolean hasAttr(SEXP s) {
    return s.attributes() != null && !Objects.requireNonNull(s.attributes()).isEmpty();
  }

  /** Determines the RDS item type associated with the provided SEXP. */
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

  /**
   * Returns the general purpose flags associated with the provided SEXP.
   *
   * <p>FIXME: we should actually get the proper "locked" flag, but we currently don't have a
   * representation of this in our environments.
   */
  private GPFlags gpFlags(SEXP ignored) {
    // Since we do not have a SEXP representation of a string, we supply null for the charset
    return new GPFlags(null, false);
  }

  /** Returns the flags associated with the provided SEXP. */
  private Flags flags(SEXP s) {
    return new Flags(rdsType(s), gpFlags(s), s.isObject(), hasAttr(s), hasTag(s));
  }

  /** Writes the provided flags to the stream. */
  private void writeFlags(Flags flags) throws IOException {
    out.writeInt(flags.encode());
  }

  /** Writes the flags associated with the provided SEXP. */
  private void writeFlags(SEXP s) throws IOException {
    var flags = flags(s);
    writeFlags(flags);
  }

  private void writeAttributes(Attributes attrs) throws IOException {
    if (attrs.isEmpty())
      throw new IllegalArgumentException("Cannot write an empty set of attributes");
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
            false);
    writeFlags(flags);
    out.writeInt(s.length());
    out.writeString(s);
  }

  // SEXP writing ---------------------------------------------------------------------------------

  private void writeEnv(EnvSXP env) throws IOException {
    refAdd(env);
    switch (env) {
      case NamespaceEnvSXP namespace -> {
        out.writeInt(RDSItemType.Special.NAMESPACESXP.i());
        var namespaceInfo = SEXPs.string(namespace.name(), namespace.version());
        write(namespaceInfo);
        // TODO: needs tests
      }
      case UserEnvSXP userEnv -> {
        out.writeInt(SEXPType.ENV.i);
        // Write 1 if the environment is locked, or 0 if it is not
        out.writeInt(gpFlags(userEnv).isLocked() ? 1 : 0);
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
        if (hasAttr(env)) {
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

  final int MAX_PACKED_INDEX = Integer.MAX_VALUE >> 8;

  private void writeRef(int refIdx) throws IOException {
    if (refIdx > MAX_PACKED_INDEX) {
      // If the reference index can't be packed in the flags, write it afterward
      writeFlags(new Flags(RDSItemType.Special.REFSXP, 0));
      out.writeInt(refIdx);
    } else {
      // Otherwise, pack the reference index in the flags
      writeFlags(new Flags(RDSItemType.Special.REFSXP, refIdx));
    }
  }

  private void writeBuiltinOrSpecialSXP(BuiltinOrSpecialSXP bos) throws IOException {
    writeFlags(bos);
    var name = bos.id().name();
    out.writeInt(name.length());
    out.writeString(name);
  }

  private void writeListSXP(ListSXP lsxp) throws IOException {
    Flags flags = flags(lsxp);
    boolean hasAttr = flags.hasAttributes();
    for (var el : lsxp) {
      var itemFlags =
          new Flags(
              RDSItemType.valueOf(lsxp.type().i),
              flags.getLevels(),
              flags.isObject(),
              hasAttr,
              el.tag() != null);
      writeFlags(itemFlags);
      if (el.tag() != null) {
        // Convert the tag to a symbol, since we need to add it to the ref table
        RegSymSXP asSym = SEXPs.symbol(el.tag());
        writeRegSymbol(asSym);
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
    writeFlags(flags(lang));
    writeItem(lang.fun());
    writeItem(lang.args());
  }

  private void writePromSXP(PromSXP prom) throws IOException {
    if (hasAttr(prom)) {
      writeAttributes(Objects.requireNonNull(prom.attributes()));
    }
    writeFlags(flags(prom));
    // a promise has the value, expression and environment, in this order
    writeItem(prom.val());
    writeItem(prom.expr());
    writeItem(prom.env());
  }

  private void writeCloSXP(CloSXP clo) throws IOException {
    if (hasAttr(clo)) {
      writeAttributes(Objects.requireNonNull(clo.attributes()));
    }
    writeFlags(flags(clo));
    // a closure has the environment, formals, and then body
    writeItem(clo.env());
    writeItem(clo.parameters());
    writeItem(clo.body());
  }

  private <T> void writeVectorSXP(VectorSXP<T> s) throws IOException {
    writeFlags(s);
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
      if (hasAttr(lol)) {
        type =
            switch (lol) {
              case LangSXP _lang -> RDSItemType.Special.ATTRLANGSXP;
              case ListSXP _list -> RDSItemType.Special.ATTRLISTSXP;
            };
      }
      out.writeInt(type.i());

      if (hasAttr(lol)) {
        writeAttributes(Objects.requireNonNull(lol.attributes()));
      }

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
    writeFlags(s);

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
    // Add to the ref table
    refAdd(s);
    // Write the symbol
    out.writeInt(SEXPType.SYM.i);
    writeChars(s.name());
  }

  @Override
  public void close() throws IOException {
    out.close();
  }
}