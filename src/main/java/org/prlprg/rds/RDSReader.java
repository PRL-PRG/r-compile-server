package org.prlprg.rds;

import static java.util.Objects.requireNonNull;

import com.google.common.collect.ImmutableList;
import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.Charset;
import java.util.*;
import javax.annotation.Nullable;
import org.prlprg.AppConfig;
import org.prlprg.RSession;
import org.prlprg.bc.Bc;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.Attributes;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.ExprSXP;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.LglSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.NilSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.SymOrLangSXP;
import org.prlprg.sexp.TaggedElem;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.sexp.VecSXP;
import org.prlprg.util.IO;

public class RDSReader implements Closeable {

  private final RSession rsession;
  private final RDSInputStream in;
  private final List<SEXP> refTable = new ArrayList<>(128);
  private final RDSLogger logger;

  // FIXME: this should include the logic from platform.c
  //  or should we individually read the charset property of each SEXP? this will require
  //  verifying which SEXPs we need to write the charset for--just CHARSXP, or also
  //  builtin/special?
  private final Charset nativeEncoding = Charset.defaultCharset();

  private RDSReader(RSession session, InputStream in, AppConfig.RDSLogLevel level) {
    this.rsession = session;
    this.logger = new RDSLogger("=========== READING STREAM ===========", level);
    this.in = new RDSInputStream(in, logger);
  }

  /**
   * Reads a SEXP from the provided file. By default, logs details at {@code RDSLogLevel.GENERAL}.
   *
   * @param session The current R session, used to supply special constructs such as the base
   *     environment and namespace
   * @param file The file to read from
   */
  public static SEXP readFile(RSession session, File file) throws IOException {
    return readFile(session, file, AppConfig.RDSLogLevel.GENERAL);
  }

  /**
   * Reads a SEXP from the provided file.
   *
   * @param session The current R session, used to supply special constructs such as the base
   *     environment and namespace
   * @param file The file to read from
   * @param level The logging level details will be written at
   */
  public static SEXP readFile(RSession session, File file, AppConfig.RDSLogLevel level)
      throws IOException {
    try (var input = new FileInputStream(file)) {
      return readStream(session, IO.maybeDecompress(input), level);
    }
  }

  /**
   * Reads a SEXP from the provided {@code InputStream}. By default, logs details at {@code
   * RDSLogLevel.GENERAL}.
   *
   * @param session The current R session, used to supply special constructs such as the base
   *     environment and namespace
   * @param input The stream to read from
   */
  public static SEXP readStream(RSession session, InputStream input) throws IOException {
    return readStream(session, input, AppConfig.RDSLogLevel.GENERAL);
  }

  /**
   * Reads a SEXP from the provided {@code InputStream}.
   *
   * @param session The current R session, used to supply special constructs such as the base
   *     environment and namespace
   * @param input The stream to read from
   * @param level The logging level details will be written at
   */
  public static SEXP readStream(RSession session, InputStream input, AppConfig.RDSLogLevel level)
      throws IOException {
    try (var reader = new RDSReader(session, input, level)) {
      return reader.read();
    }
  }

  private void readHeader() throws IOException {
    logger.push("Header");

    if (in.readByte("type") != 'X') {
      throw new RDSException("Unsupported type (possibly compressed)");
    }
    assert in.readByte("nl") == '\n';

    // versions
    var formatVersion = in.readInt("format version");
    if (formatVersion != 2) {
      // we do not support RDS version 3 because it uses ALTREP
      throw new RDSException("Unsupported RDS version: " + formatVersion);
    }
    // writer version
    in.readInt("writer version");
    // minimal reader version
    in.readInt("minimal reader version");

    logger.pop();
  }

  public SEXP read() throws IOException {
    readHeader();
    var sexp = readItem();

    if (in.readRaw("eof") != -1) {
      throw new RDSException("Expected end of file");
    }
    return sexp;
  }

  private SEXP readItem() throws IOException {
    var flags = readFlags();

    return switch (flags.getType()) {
      case RDSItemType.Sexp s ->
          switch (s.sexp()) {
            case NIL -> SEXPs.NULL;
            case SYM -> readSymbol();
            case CLO -> readClosure(flags);
            case LIST -> readList(flags);
            case INT -> readInts(flags);
            case REAL -> readReals(flags);
            case LGL -> readLogicals(flags);
            case VEC -> readVec(flags);
            case ENV -> readEnv();
            case STR -> readStrs(flags);
            case LANG -> readLang(flags);
            case BCODE -> readByteCode();
            case EXPR -> readExpr(flags);
            case PROM -> readPromise(flags);
            case BUILTIN -> readBuiltin(false);
            case SPECIAL -> readBuiltin(true);
            case CPLX -> readComplex(flags);
            default -> throw new RDSException("Unsupported SEXP type: " + s.sexp());
          };
      case RDSItemType.Special s ->
          switch (s) {
            case NILVALUE_SXP -> SEXPs.NULL;
            case MISSINGARG_SXP -> SEXPs.MISSING_ARG;
            case GLOBALENV_SXP -> rsession.globalEnv();
            case BASEENV_SXP -> rsession.baseEnv();
            case BASENAMESPACE_SXP -> rsession.baseNamespace();
            case EMPTYENV_SXP -> SEXPs.EMPTY_ENV;
            case REFSXP -> readRef(flags);
            case NAMESPACESXP -> readNamespace();
            case BCREPDEF, BCREPREF ->
                throw new RDSException("Unexpected bytecode reference here (not in bytecode)");
            case ATTRLANGSXP, ATTRLISTSXP -> throw new RDSException("Unexpected attr here");
            case UNBOUNDVALUE_SXP -> SEXPs.UNBOUND_VALUE;
            case GENERICREFSXP, PACKAGESXP, PERSISTSXP, CLASSREFSXP, ALTREPSXP ->
                throw new RDSException("Unsupported RDS special type: " + s);
          };
    };
  }

  private SEXP readComplex(Flags flags) throws IOException {
    logger.push("ComplexSXP");

    var length = in.readInt("length");
    var cplx = ImmutableList.<Complex>builder();
    for (int i = 0; i < length; i++) {
      var real = in.readDouble("real");
      var im = in.readDouble("im");
      cplx.add(new Complex(real, im));
    }
    var attributes = readAttributes(flags);

    logger.pop();
    return SEXPs.complex(cplx.build(), attributes);
  }

  private SEXP readBuiltin(boolean special) throws IOException {
    logger.push(special ? "SpecialSXP" : "BuiltinSXP");

    var length = in.readInt("length");
    var name = in.readString(length, nativeEncoding, "name");

    logger.pop();
    return special ? SEXPs.special(name) : SEXPs.builtin(name);
  }

  private SEXP readPromise(Flags flags) throws IOException {
    logger.push("PromiseSXP");

    // FIXME: do something with the attributes here?
    readAttributes(flags);
    var tag = flags.hasTag() ? readItem() : SEXPs.NULL;
    var val = readItem();
    var expr = readItem();

    logger.pop();
    if (tag instanceof NilSXP) {
      return new PromSXP(expr, val, SEXPs.EMPTY_ENV);
    } else if (tag instanceof EnvSXP env) {
      return new PromSXP(expr, val, env);
    } else {
      throw new RDSException("Expected promise ENV to be environment");
    }
  }

  private SEXP readNamespace() throws IOException {
    logger.push("NamespaceSXP");

    var namespaceInfo = readStringVec();
    if (namespaceInfo.size() != 2) {
      throw new RDSException("Expected 2-element list, got: " + namespaceInfo);
    }

    var namespace = rsession.getNamespace(namespaceInfo.get(0), namespaceInfo.get(1));
    refTable.add(namespace);

    logger.pop();
    return namespace;
  }

  // Note that this method is not used to StringSXPs.
  private StrSXP readStringVec() throws IOException {
    logger.push("String Vector");

    if (in.readInt("name") != 0) {
      // cf. InStringVec
      throw new RDSException("names in persistent strings are not supported yet");
    }

    var length = in.readInt("length");
    var strings = new ArrayList<String>(length);
    for (int i = 0; i < length; i++) {
      strings.add(readChars());
    }

    logger.pop();
    return SEXPs.string(strings);
  }

  private ExprSXP readExpr(Flags flags) throws IOException {
    logger.push("ExprSXP");

    var length = in.readInt("length");
    var sexps = new ArrayList<SEXP>(length);
    for (int i = 0; i < length; i++) {
      sexps.add(readItem());
    }

    Attributes attributes = readAttributes(flags);

    logger.pop();
    return SEXPs.expr(sexps, attributes);
  }

  private BCodeSXP readByteCode() throws IOException {
    logger.push("BCodeSXP");

    var length = in.readInt("reps");
    var reps = new SEXP[length];

    var bc = readByteCode1(reps);
    logger.pop();
    return bc;
  }

  private BCodeSXP readByteCode1(SEXP[] reps) throws IOException {
    logger.push("BCodeSXP (1)");

    @SuppressWarnings("SwitchStatementWithTooFewBranches")
    var code =
        switch (readItem()) {
          case IntSXP s -> s;
          default -> throw new RDSException("Expected IntSXP");
        };

    if (code.get(0) != Bc.R_BC_VERSION) {
      throw new RDSException("Unsupported byte code version: " + code.get(0));
    }

    var consts = readByteCodeConsts(reps);
    var factory = new GNURByteCodeDecoderFactory(code.data(), consts);

    logger.pop();
    return SEXPs.bcode(factory.create());
  }

  private List<SEXP> readByteCodeConsts(SEXP[] reps) throws IOException {
    logger.push("BCodeSXP (consts)");

    var length = in.readInt("length");

    var consts = new ArrayList<SEXP>(length);
    for (int i = 0; i < length; i++) {
      var type = in.readInt("type");

      switch (RDSItemType.valueOf(type)) {
        case RDSItemType.Sexp s -> {
          switch (s.sexp()) {
            case BCODE -> consts.add(readByteCode1(reps));
            case LANG, LIST -> consts.add(readByteCodeLang(type, reps));
            default -> consts.add(readItem());
          }
        }
        case RDSItemType.Special s -> {
          switch (s) {
            case ATTRLISTSXP, ATTRLANGSXP, BCREPREF, BCREPDEF ->
                consts.add(readByteCodeLang(type, reps));
            default -> consts.add(readItem());
          }
        }
      }
    }

    logger.pop();
    return consts;
  }

  // `type` will not necessarily correspond with a valid RDSItemType. If the next value in the
  // stream is not a LangSXP, ListSXP, or bytecode reference / definition, then the stream will
  // include a padding int so the next SEXP can be read in full. This is why the function accepts
  // an integer instead of an RDSItemType.
  private SEXP readByteCodeLang(int type, SEXP[] reps) throws IOException {
    logger.push("BCodeSXP (lang)");

    // If the type is 0, we encountered a padding bit, meaning we jump back to "regular" SEXP
    // processing.
    if (type == 0) {
      var item = readItem();
      logger.pop();
      return item;
    }

    // Otherwise, we continue with bytecode processing
    var rdsType = RDSItemType.valueOf(type);

    SEXP res =
        switch (rdsType) {
          case RDSItemType.Sexp s -> {
            if (s.sexp() == SEXPType.LANG || s.sexp() == SEXPType.LIST) {
              yield readByteCodeLang1(rdsType, reps);
            } else {
              throw new UnsupportedOperationException(
                  "RDS reader error when reading SEXP: expected a padding bit, lang or list SXP, got: "
                      + rdsType);
            }
          }
          case RDSItemType.Special s ->
              switch (s) {
                case BCREPREF -> {
                  int pos = in.readInt("BCREPREF location");
                  yield reps[pos];
                }
                case BCREPDEF, ATTRLISTSXP, ATTRLANGSXP -> readByteCodeLang1(rdsType, reps);
                default ->
                    throw new UnsupportedOperationException(
                        "RDS reader error when reading special: expected a padding bit, BCREPDEF, "
                            + "BCREPREF, ATTRLISTSXP, or ATTRLANGSXP, got: "
                            + rdsType);
              };
        };

    logger.pop();
    return res;
  }

  private SEXP readByteCodeLang1(RDSItemType type, SEXP[] reps) throws IOException {
    var pos = -1;
    if (type == RDSItemType.Special.BCREPDEF) {
      pos = in.readInt("BCREPDEF location");
      var type_i = in.readInt("BCREPDEF type");
      type = RDSItemType.valueOf(type_i);
    }
    var attributes =
        (type == RDSItemType.Special.ATTRLANGSXP || type == RDSItemType.Special.ATTRLISTSXP)
            ? readAttributes()
            : Attributes.NONE;

    SEXP tagSexp = readItem();
    SEXP ans;

    if (!type.isSexp(SEXPType.LANG)
        && !type.isSexp(SEXPType.LIST)
        && type != RDSItemType.Special.ATTRLANGSXP
        && type != RDSItemType.Special.ATTRLISTSXP) {
      throw new RDSException("Unexpected bclang type: " + type);
    }

    String tag;

    if (tagSexp instanceof RegSymSXP sym) {
      tag = sym.name();
    } else if (tagSexp instanceof NilSXP) {
      tag = null;
    } else {
      throw new RDSException("Expected regular symbol or nil");
    }

    var headType = in.readInt("head type");
    var head = readByteCodeLang(headType, reps);

    var tailType = in.readInt("tail type");
    var tail = readByteCodeLang(tailType, reps);

    ListSXP tailList;

    // In R LISTSXP and LANGSXP are pretty much the same.
    // The RDS relies on this fact quite a bit.
    // The tail could thus be a LANGSXP (for example: methods::externalRefMethod)
    if (tail instanceof ListSXP) {
      tailList = (ListSXP) tail;
    } else if (tail instanceof LangSXP lang) {
      tailList = lang.args().prepend(new TaggedElem(null, lang.fun()));
    } else {
      throw new RDSException("Expected list or language, got: " + tail.type());
    }

    ans = tailList.prepend(new TaggedElem(tag, head)).withAttributes(attributes);

    if (type.isSexp(SEXPType.LANG) || type == RDSItemType.Special.ATTRLANGSXP) {
      ListSXP ansList = (ListSXP) ans;

      var fun = ansList.get(0).value();
      if (!(fun instanceof SymOrLangSXP funSymOrLang)) {
        throw new RDSException("Expected symbol or language, got: " + fun.type());
      }

      ListSXP args = SEXPs.NULL;
      if (ansList.size() > 1) {
        args = ansList.subList(1);
      }

      ans = SEXPs.lang(funSymOrLang, args, attributes);
    }

    if (pos >= 0) {
      reps[pos] = ans;
    }

    return ans;
  }

  private SEXP readRef(Flags flags) throws IOException {
    logger.push("Reference");

    var index = flags.unpackRefIndex();
    // if index is 0, it was too large to be packed with the flags and was therefore written
    // afterward
    if (index == 0) {
      index = in.readInt("ref index (large)");
    }

    // since index is 1-based
    var ref = refTable.get(index - 1);
    logger.log(ref, "*");

    logger.pop();
    return ref;
  }

  private LangSXP readLang(Flags flags) throws IOException {
    logger.push("LangSXP");

    var attributes = readAttributes(flags);

    // FIXME: not sure what it is good for
    readTag(flags);

    if (!(readItem() instanceof SymOrLangSXP fun)) {
      throw new RDSException("Expected symbol or language");
    }
    if (!(readItem() instanceof ListSXP args)) {
      throw new RDSException("Expected list");
    }
    return SEXPs.lang(fun, args, attributes);
  }

  private String readChars() throws IOException {
    logger.push("Chars");

    var flags = readFlags();
    if (!flags.getType().isSexp(SEXPType.CHAR)) {
      throw new RDSException("Expected CHAR");
    }
    var length = in.readInt("length");

    String out;
    if (length == -1) {
      out = Constants.NA_STRING;
    } else {
      out = in.readString(length, nativeEncoding, "value");
    }

    logger.pop();
    return out;
  }

  private StrSXP readStrs(Flags flags) throws IOException {
    logger.push("StrSXP");

    var length = in.readInt("length");
    var strings = ImmutableList.<String>builderWithExpectedSize(length);
    for (int i = 0; i < length; i++) {
      strings.add(readChars());
    }

    var attributes = readAttributes(flags);

    logger.pop();
    return SEXPs.string(strings.build(), attributes);
  }

  @SuppressFBWarnings("DLS_DEAD_LOCAL_STORE")
  private UserEnvSXP readEnv() throws IOException {
    logger.push("UserEnvSXP");

    var item = new UserEnvSXP();
    refTable.add(item);

    var locked = in.readInt("locked");
    if (locked != 0 && locked != 1) {
      throw new RDSException("Expected 0 or 1 (LOCKED)");
    }

    // enclosing environment - parent
    switch (readItem()) {
      case EnvSXP parent -> item.setParent(parent);
      case NilSXP _ -> item.setParent(rsession.baseEnv());
      default -> throw new RDSException("Expected environment (ENCLOS)");
    }

    // frame
    switch (readItem()) {
      case NilSXP _ -> {}
      case ListSXP frame -> {
        for (var elem : frame) {
          item.set(requireNonNull(elem.tag()), elem.value());
        }
      }
      default -> throw new RDSException("Expected list (FRAME)");
    }

    // hashtab
    switch (readItem()) {
      case NilSXP _ -> {}
      case VecSXP hashtab -> {
        for (var elem : hashtab) {
          switch (elem) {
            case NilSXP _ -> {}
            case ListSXP list -> {
              for (var e : list) {
                item.set(requireNonNull(e.tag()), e.value());
              }
            }
            default -> throw new RDSException("Expected list for the hashtab entries");
          }
        }
      }
      default -> throw new RDSException("Expected list (HASHTAB)");
    }

    return item.withAttributes(readAttributes());
  }

  private VecSXP readVec(Flags flags) throws IOException {
    logger.push("VecSXP");

    var length = in.readInt("length");
    var data = ImmutableList.<SEXP>builderWithExpectedSize(length);
    for (int i = 0; i < length; i++) {
      data.add(readItem());
    }
    var attributes = readAttributes(flags);

    logger.pop();
    return SEXPs.vec(data.build(), attributes);
  }

  private LglSXP readLogicals(Flags flags) throws IOException {
    logger.push("LglSXP");

    var length = in.readInt("length");
    var data = in.readInts(length, "data");
    var attributes = readAttributes(flags);

    logger.pop();
    return SEXPs.logical(
        Arrays.stream(data).mapToObj(Logical::valueOf).collect(ImmutableList.toImmutableList()),
        attributes);
  }

  private RealSXP readReals(Flags flags) throws IOException {
    logger.push("RealSXP");

    var length = in.readInt("length");
    var data = in.readDoubles(length, "data");
    var attributes = readAttributes(flags);

    logger.pop();
    return SEXPs.real(data, attributes);
  }

  private IntSXP readInts(Flags flags) throws IOException {
    logger.push("IntSXP");

    var length = in.readInt("length");
    var data = in.readInts(length, "data");
    var attributes = readAttributes(flags);

    logger.pop();
    return SEXPs.integer(data, attributes);
  }

  private ListSXP readList(Flags flags) throws IOException {
    logger.push("ListSXP");

    var data = ImmutableList.<TaggedElem>builder();
    Attributes attributes = null;

    while (!flags.getType().isSexp(SEXPType.NIL)) {
      if (!flags.getType().isSexp(SEXPType.LIST)) {
        throw new RDSException("Expected list (reading in the middle or at the end of a list)");
      }
      if (attributes == null) {
        attributes = readAttributes(flags);
      } else {
        var discard = readAttributes(flags);
        if (!discard.isEmpty()) {
          throw new RDSException("Unexpected attributes in the middle of a list");
        }
      }

      var tag = readTag(flags);
      var item = readItem();
      data.add(new TaggedElem(tag, item));

      flags = readFlags();
    }

    logger.pop();
    // TODO: add the attributes here?
    return SEXPs.list(data.build());
  }

  private CloSXP readClosure(Flags flags) throws IOException {
    logger.push("CloSXP");

    var attributes = readAttributes(flags);
    if (!(readItem() instanceof EnvSXP env)) {
      throw new RDSException("Expected CLOENV to be environment");
    }
    if (!(readItem() instanceof ListSXP formals)) {
      throw new RDSException("Expected closure FORMALS to be list");
    }
    var body = readItem();

    logger.pop();
    return SEXPs.closure(formals, body, env, attributes);
  }

  private @Nullable String readTag(Flags flags) throws IOException {
    logger.push("Tag");

    String tagVal;
    if (flags.hasTag()) {
      if (readItem() instanceof RegSymSXP s) {
        tagVal = s.name();
      } else {
        throw new RDSException("Expected tag to be a symbol");
      }
    } else {
      tagVal = null;
    }

    logger.pop();
    return tagVal;
  }

  private Attributes readAttributes(Flags flags) throws IOException {

    Attributes attributes;
    if (flags.hasAttributes()) {
      attributes = readAttributes();
    } else {
      attributes = Attributes.NONE;
    }

    return attributes;
  }

  private Attributes readAttributes() throws IOException {
    logger.push("Attributes");

    if (readItem() instanceof ListSXP xs) {
      var attrs = new Attributes.Builder();

      for (var x : xs) {
        var attr = x.tag();
        if (attr == null) {
          throw new RDSException("Expected tag");
        }
        attrs.put(attr, x.value());
      }

      logger.pop();
      return attrs.build();
    } else {
      throw new RDSException("Expected list");
    }
  }

  private RegSymSXP readSymbol() throws IOException {
    logger.push("RegSymSXP");

    var flags = readFlags();
    var s = readString(flags);
    var item = SEXPs.symbol(s);

    refTable.add(item);

    logger.pop();
    return item;
  }

  private String readString(Flags flags) throws IOException {
    logger.push("String");

    var len = in.readInt("length");
    // charset should never be null for strings
    var charset = requireNonNull(flags.getLevels().encoding());
    var data = in.readString(len, charset, "data");

    logger.pop();
    return data;
  }

  private Flags readFlags() throws IOException {
    var raw = in.readInt("flags");
    return new Flags(raw);
  }

  @Override
  public void close() throws IOException {
    in.close();
    logger.finish();
  }
}
