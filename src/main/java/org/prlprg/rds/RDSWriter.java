package org.prlprg.rds;

import java.io.*;
import java.nio.charset.Charset;
import java.util.*;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.stream.DoubleStream;
import java.util.stream.StreamSupport;
import javax.annotation.Nullable;
import org.prlprg.RVersion;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.*;
import org.prlprg.util.UnreachableError;

public class RDSWriter implements Closeable {

  private final RDSOutputStream out;
  // refIndex is 1-based, so the first ref will have index 1
  private int refIndex = 1;
  private final HashMap<SEXP, Integer> refTable = new HashMap<>(128);

  protected RDSWriter(OutputStream out) {
    this.out = new RDSOutputStream(out);
  }

  /**
   * Writes a SEXP to the provided output stream.
   *
   * @param output The stream to write to
   * @param sexp the SEXP to write
   */
  public static void writeStream(OutputStream output, SEXP sexp) throws IOException {
    try (var writer = new RDSWriter(output)) {
      writer.write(sexp);
    }
  }

  /**
   * Writes a SEXP to the provided file.
   *
   * @param file The file to write to
   * @param sexp the SEXP to write
   */
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
    out.writeInt(new RVersion(2, 3, 0, null).encode());
  }

  public void write(SEXP sexp) throws IOException {
    writeHeader();
    writeItem(sexp);
  }

  public void writeItem(SEXP s) throws IOException {
    writeItemOrUnbound(s);
  }

  /**
   * See <a
   * href="https://github.com/wch/r-source/blob/65892cc124ac20a44950e6e432f9860b1d6e9bf4/src/main/serialize.c#L1021">GNU-R
   * serialize.c</a>.
   */
  public void writeItemOrUnbound(@Nullable SEXP s) throws IOException {
    // Write the flags for this SEXP. This will vary depending on whether the SEXP is a special
    // RDS type or not
    var flags = flags(s);
    out.writeInt(flags.encode());

    switch (flags.getType()) {
        // Special types not handled by Save Special hooks
      case RDSItemType.Special special -> {
        switch (special) {
          case RDSItemType.Special.NAMESPACESXP -> {
            Objects.requireNonNull(s);
            // add to the ref table
            refAdd(s);
            // write details about the namespace
            var namespace = (NamespaceEnvSXP) s;
            writeStringVec(SEXPs.string(namespace.name(), namespace.version()));
          }
          case RDSItemType.Special.REFSXP -> {
            // If the flags encoded a reference, then we may need to write the ref index (only if
            // it was too large to be packed in the flags)
            if (flags.unpackRefIndex() == 0) {
              out.writeInt(refIndex);
            }
          }
          default -> {
            /* nothing to write */
          }
        }
      }
      case RDSItemType.Sexp _ -> {
        // Otherwise, write the sexp as normal
        switch (s) {
          case RegSymSXP sym -> writeRegSymbol(sym);
          case MissingSXP _ ->
              throw new UnsupportedOperationException("can't directly serialize the missing value");
          case null -> throw new UnsupportedOperationException("can't serialize the unbound value");
          case EnvSXP env -> writeEnv(env);
          case ListSXP list -> writeListSXP(list);
          case LangSXP lang -> writeLangSXP(lang);
          case DotsListSXP _ ->
              throw new UnsupportedOperationException("can't directly serialize a dots list");
          case PromSXP<?> prom -> writePromSXP(prom);
          case CloSXP clo -> writeCloSXP(clo);
          case BuiltinOrSpecialSXP bos -> writeBuiltinOrSpecialSXP(bos);
          case VectorSXP<?> vec -> writeVectorSXP(vec);
          case BCodeSXP bc -> writeByteCode(bc);
        }
      }
    }
  }

  // UTILITY (not standard SEXPs) -----------------------------------------------------------------

  /** Adds s to the ref table at the next available index */
  private void refAdd(SEXP s) {
    refTable.put(s, refIndex++);
  }

  /**
   * Determines if the hasTag bit should be set based on the SEXP.
   *
   * <p>The meaning of "tag" varies depending on the SEXP. In C, it is defined based on the position
   * of the field (namely, the last field of the struct). So, it corresponds with the fields as
   * follows:
   *
   * <ul>
   *   <li>{@link CloSXP}: the closure's environment
   *   <li>{@link PromSXP}: the promise's environment (null if the promise has been evaluated)
   *   <li>{@link ListSXP}: the name assigned to an element
   *   <li>{@link LangSXP}: a name assigned to the function (we do not support this since it's such
   *       a rare case)
   * </ul>
   */
  private boolean hasTag(SEXP s) {
    return switch (s) {
        // CloSXP should always be marked as having a tag
      case CloSXP _ -> true;
        // The tag for a LangSXP is manually assigned to the function (this is very rare). We
        // don't support them.
      case LangSXP _ -> false;
        // In GNUR, the tag of a promise is its environment. The environment is set to null once
        // the promise is evaluated. So, hasTag should return true if and only if the promise is
        // unevaluated (lazy)
      case PromSXP<?> prom -> prom.isLazy();
        // hasTag is based on the first element
      case ListSXP list -> !list.isEmpty() && list.get(0).hasTag();
      default -> false;
    };
  }

  /** Determines the RDS item type associated with the provided SEXP. */
  private RDSItemType rdsType(@Nullable SEXP s) {
    return switch (s) {
        // "Save Special hooks" from serialize.c
      case NilSXP _ -> RDSItemType.Special.NILVALUE_SXP;
      case ListSXP l when l.isEmpty() -> RDSItemType.Special.NILVALUE_SXP;
      case EmptyEnvSXP _ -> RDSItemType.Special.EMPTYENV_SXP;
      case BaseEnvSXP _ -> RDSItemType.Special.BASEENV_SXP;
      case GlobalEnvSXP _ -> RDSItemType.Special.GLOBALENV_SXP;
        // Non-"Save Special" cases
      case NamespaceEnvSXP _ -> RDSItemType.Special.NAMESPACESXP;
      case MissingSXP _ -> RDSItemType.Special.MISSINGARG_SXP;
      case null -> RDSItemType.Special.UNBOUNDVALUE_SXP;
      default -> new RDSItemType.Sexp(s.type());
    };
  }

  /**
   * Returns the flags associated with the provided SEXP. If the SEXP is already present in the ref
   * table, will return flags associated with its reference index.
   */
  final int MAX_PACKED_INDEX = Integer.MAX_VALUE >> 8;

  private Flags flags(@Nullable SEXP s) {
    // If refIndex is greater than 0, the object has already been written, so we can
    // write a reference (since the index is 1-based)
    int sexpRefIndex = s == null ? 0 : refTable.getOrDefault(s, 0);
    if (sexpRefIndex > 0) {
      if (sexpRefIndex > MAX_PACKED_INDEX) {
        // If the reference index can't be packed in the flags, it will be written afterward
        return new Flags(RDSItemType.Special.REFSXP, 0);
      } else {
        // Otherwise, pack the reference index in the flags
        return new Flags(RDSItemType.Special.REFSXP, sexpRefIndex);
      }
    }

    // Otherwise, write flags based on the RDSType of s
    // FIXME: we should actually get the proper "locked" flag, but we currently don't have a
    //  representation of this in our environments
    return new Flags(
        rdsType(s),
        new GPFlags(),
        s != null && s.isObject(),
        s != null && s.hasAttributes(),
        s != null && hasTag(s));
  }

  /**
   * Writes an {@link Attributes} to the output stream, throwing an exception if it is empty. As
   * such, it is essential to check if an object has attributes before invoking this method.
   */
  private void writeAttributes(Attributes attrs) throws IOException {
    if (attrs.isEmpty())
      throw new IllegalArgumentException("Cannot write an empty set of attributes");
    // convert to ListSXP
    var l = attrs.entrySet().stream().map(e -> new TaggedElem(e.getKey(), e.getValue())).toList();
    // Write it
    writeItem(SEXPs.list(l));
  }

  private void writeAttributesIfPresent(SEXP s) throws IOException {
    if (s.hasAttributes()) writeAttributes(Objects.requireNonNull(s.attributes()));
  }

  /** Writes the tag of the provided TaggedElem, if one exists. If none exists, does nothing. */
  private void writeTagIfPresent(TaggedElem elem) throws IOException {
    if (elem.hasTag()) {
      // Convert the tag to a symbol, since we need to add it to the ref table
      writeItem(Objects.requireNonNull(elem.tagAsSymbol()));
    }
  }

  /**
   * Writes a String to the output in the format expected by RDS. Since R represents Strings as a
   * CHARSXP, we need to write metadata like flags.
   */
  private void writeChars(String s) throws IOException {
    var flags =
        new Flags(
            RDSItemType.valueOf(SEXPType.CHAR.i),
            new GPFlags(Charset.defaultCharset(), false),
            false,
            false,
            false);
    out.writeInt(flags.encode());

    // If the string is NA, we write -1 for the length and exit
    if (Coercions.isNA(s)) {
      out.writeInt(-1);
      return;
    }

    // Otherwise, do a standard string write (length in bytes, then bytes)
    var bytes = s.getBytes(Charset.defaultCharset());
    out.writeInt(bytes.length);
    out.writeBytes(bytes);
  }

  /**
   * Writes a StrSXP with an unused placeholder "name" int before the length.
   *
   * @apiNote this is NOT used to write regular StrSXPs. It is currently only used to write
   *     namespace and package environment spec.
   */
  private void writeStringVec(StrSXP s) throws IOException {
    out.writeInt(0);
    out.writeInt(s.size());

    for (String str : s) {
      writeChars(str);
    }
  }

  // STANDARD SEXPs -------------------------------------------------------------------------------

  private void writeEnv(EnvSXP env) throws IOException {
    // Add to the ref table
    refAdd(env);

    if (env instanceof UserEnvSXP userEnv) {
      // Write 1 if the environment is locked, or 0 if it is not
      // FIXME: implement locked environments, as is this will always be false
      out.writeInt(new GPFlags().isLocked() ? 1 : 0);
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
      if (env.hasAttributes()) {
        writeAttributes(env.attributes());
      } else {
        writeItem(SEXPs.NULL);
      }
    } else {
      throw new UnreachableError("Implemented as special RDS type: " + env.type());
    }
  }

  private void writeRegSymbol(RegSymSXP rs) throws IOException {
    // Add to the ref table
    refAdd(rs);
    // Write the symbol
    writeChars(rs.name());
  }

  private void writeBuiltinOrSpecialSXP(BuiltinOrSpecialSXP bos) {
    // For now, we throw an exception upon writing any SpecialSXP or BuiltinSXP. This is because
    // RDS serializes builtins via their name, but we do not have any (fully implemented) construct
    // representing the name of a builtin (instead, they are represented with indices)
    throw new UnsupportedOperationException("Unable to write builtin: " + bos);

    // Spec for future implementation:
    // - write an int representing the length of the BuiltinOrSpecialSXP's name
    // - write the name as a String (not a CHARSXP, in that no additional flags are written)
  }

  private void writeListSXP(ListSXP lsxp) throws IOException {
    Flags listFlags = flags(lsxp);

    // Write the first element. This case is separate because:
    // - the first element may have attributes
    // - the first element's tag has already been written
    writeAttributesIfPresent(lsxp);

    var first = lsxp.get(0);
    writeTagIfPresent(first);
    writeItem(first.value());

    // Write the rest of the list
    for (var el : lsxp.subList(1)) {
      // Write flags
      var itemFlags = listFlags.withTag(el.hasTag()).withAttributes(false);
      out.writeInt(itemFlags.encode());
      // Write tag
      writeTagIfPresent(el);
      // Write item
      writeItem(el.value());
    }

    // Write a NilSXP to end the list
    writeItem(SEXPs.NULL);
  }

  private void writeLangSXP(LangSXP lang) throws IOException {
    writeAttributesIfPresent(lang);
    // LangSXPs can have tags, but we don't support them, so no tag is written here
    writeItem(lang.fun());
    writeItem(lang.args());
  }

  private void writePromSXP(PromSXP<?> prom) throws IOException {
    writeAttributesIfPresent(prom);

    // TODO: test that this is the correct order of arguments

    // Only write the
    if (prom.isLazy()) {
      writeItem(prom.env());
    }

    writeItemOrUnbound(prom.val());
    writeItem(prom.expr());
  }

  private void writeCloSXP(CloSXP clo) throws IOException {
    writeAttributesIfPresent(clo);
    // a closure has the environment, formals, and then body
    writeItem(clo.env());
    writeItem(clo.parameters());
    writeItem(clo.body());
  }

  private <T> void writeVectorSXP(VectorSXP<T> s) throws IOException {
    var length = s.size();
    out.writeInt(length);

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
        // For each string in the vector, we write its chars because R represents each string as a
        // CHARSXP
        for (String str : strs) {
          writeChars(str);
        }
      }

      default -> throw new RuntimeException("Unreachable: implemented in another branch.");
    }

    writeAttributesIfPresent(s);
  }

  // BYTECODE -------------------------------------------------------------------------------------

  private void scanForCircles(SEXP sexp, HashMap<SEXP, Integer> reps, HashSet<SEXP> seen) {
    switch (sexp) {
      case AbstractPairListSXP lol -> {
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
            // For ListSXP, we scan the values
          case ListSXP list -> list.values().forEach((el) -> scanForCircles(el, reps, seen));
          case DotsListSXP _ -> {
            // Do nothing
          }
        }
      }
        // For bytecode, we scan the constant pool
      case BCodeSXP bc -> bc.bc().consts().forEach((el) -> scanForCircles(el, reps, seen));

      default -> {
        // do nothing
      }
    }
  }

  private void writeByteCodeLang(SEXP s, HashMap<SEXP, Integer> reps, AtomicInteger nextRepIndex)
      throws IOException {
    if (s instanceof AbstractPairListSXP lol && lol.type() != SEXPType.NIL) {
      var assignedRepIndex = reps.get(lol);
      if (assignedRepIndex != null) {
        if (assignedRepIndex == -1) {
          // If the rep is present in the map but is -1, this is our first time seeing it, so we
          // emit a BCREPDEF and update the counter
          int newIndex = nextRepIndex.getAndIncrement();
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
      if (lol.hasAttributes()) {
        type =
            switch (lol) {
              case LangSXP _ -> RDSItemType.Special.ATTRLANGSXP;
              case ListSXP _ -> RDSItemType.Special.ATTRLISTSXP;
              case DotsListSXP _ -> throw new UnreachableError();
            };
      }
      out.writeInt(type.i());
      writeAttributesIfPresent(lol);

      switch (lol) {
          // For a LangSXP, recursively write the function and args
        case LangSXP lang -> {
          // The tag of a LangSXP is an argument name, but it does not seem that we support them.
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
        case DotsListSXP _ -> throw new UnreachableError();
      }
    } else { // Print a zero as padding and write the item normally
      out.writeInt(0);
      writeItem(s);
    }
  }

  private void writeByteCode1(BCodeSXP s, HashMap<SEXP, Integer> reps, AtomicInteger nextRepIndex)
      throws IOException {
    // Decode the bytecode (we will get a vector of integers)
    // write the vector of integers
    var encoder = new GNURByteCodeEncoderFactory(s.bc());

    var code_bytes = encoder.buildRaw();
    writeItem(SEXPs.integer(code_bytes.getInstructions()));
    writeByteCodeConsts(code_bytes.getConsts(), reps, nextRepIndex);
  }

  private void writeByteCodeConsts(
      List<SEXP> consts, HashMap<SEXP, Integer> reps, AtomicInteger nextRepIndex)
      throws IOException {
    // write the number of consts in the bytecode
    // iterate the consts: if it s bytecode, write the type and recurse
    // if it is langsxp or listsxp,  write them , using the BCREDPEF, ATTRALANGSXP and ATTRLISTSXP
    // else write the type and the value
    out.writeInt(consts.size());

    // Iterate the constant pool and write the values
    for (var c : consts) {
      switch (c) {
        case BCodeSXP bc -> {
          out.writeInt(c.type().i);
          writeByteCode1(bc, reps, nextRepIndex);
        }
          // writeBCLang writes the type i
        case AbstractPairListSXP l -> writeByteCodeLang(l, reps, nextRepIndex);
        default -> {
          out.writeInt(c.type().i);
          writeItem(c);
        }
      }
    }
  }

  private void writeByteCode(BCodeSXP s) throws IOException {
    // Scan for circles
    var reps = new HashMap<SEXP, Integer>();
    var seen = new HashSet<SEXP>();
    scanForCircles(s, reps, seen);
    out.writeInt(reps.size() + 1);

    var nextRepIndex = new AtomicInteger(0);
    writeByteCode1(s, reps, nextRepIndex);
  }

  @Override
  public void close() throws IOException {
    out.close();
  }
}
