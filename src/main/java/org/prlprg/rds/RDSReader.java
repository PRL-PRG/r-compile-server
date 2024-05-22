package org.prlprg.rds;

import com.google.common.collect.ImmutableList;
import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.io.*;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.*;
import javax.annotation.Nullable;
import org.prlprg.RSession;
import org.prlprg.bc.Bc;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.*;
import org.prlprg.util.IO;

public class RDSReader implements Closeable {
  private final RSession rsession;
  private final RDSInputStream in;
  private final List<SEXP> refTable = new ArrayList<>(128);

  // FIXME: this should include the logic from platform.c
  private Charset nativeEncoding = Charset.defaultCharset();

  private RDSReader(RSession session, InputStream in) {
    this.rsession = session;
    this.in = new RDSInputStream(in);
  }

  public static SEXP readFile(RSession session, File file) throws IOException {
    try (var input = new FileInputStream(file)) {
      return readStream(session, IO.maybeDecompress(input));
    }
  }

  public static SEXP readStream(RSession session, InputStream input) throws IOException {
    try (var reader = new RDSReader(session, input)) {
      return reader.read();
    }
  }

  private void readHeader() throws IOException {
    var type = in.readByte();
    if (type != 'X') {
      throw new RDSException("Unsupported type (possibly compressed)");
    }
    var nl = in.readByte();
    assert nl == '\n';

    // versions
    var formatVersion = in.readInt();
    if (formatVersion != 2) {
      // we do not support RDS version 3 because it uses ALTREP
      throw new RDSException("Unsupported RDS version: " + formatVersion);
    }

    // writer version
    in.readInt();
    // minimal reader version
    in.readInt();
  }

  public SEXP read() throws IOException {
    readHeader();
    var sexp = readItem();
    if (in.readRaw() != -1) {
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
    var length = in.readInt();
    var cplx = ImmutableList.<Complex>builder();
    for (int i = 0; i < length; i++) {
      var real = in.readDouble();
      var im = in.readDouble();
      cplx.add(new Complex(real, im));
    }
    var attributes = readAttributes(flags);
    return SEXPs.complex(cplx.build(), attributes);
  }

  private SEXP readBuiltin(boolean special) throws IOException {
    var length = in.readInt();
    var name = in.readString(length, nativeEncoding);
    return special ? SEXPs.special(name) : SEXPs.builtin(name);
  }

  private SEXP readPromise(Flags flags) throws IOException {
    readAttributes(flags);
    var tag = flags.hasTag() ? readItem() : SEXPs.NULL;
    var val = readItem();
    var expr = readItem();

    if (tag instanceof NilSXP) {
      return new PromSXP(expr, val, SEXPs.EMPTY_ENV);
    } else if (tag instanceof EnvSXP env) {
      return new PromSXP(expr, val, env);
    } else {
      throw new RDSException("Expected promise ENV to be environment");
    }
  }

  private SEXP readNamespace() throws IOException {
    var namespaceInfo = readStringVec();
    if (namespaceInfo.size() != 2) {
      throw new RDSException("Expected 2-element list, got: " + namespaceInfo);
    }

    var namespace = rsession.getNamespace(namespaceInfo.get(0), namespaceInfo.get(1));
    refTable.add(namespace);

    return namespace;
  }

  private StrSXP readStringVec() throws IOException {
    if (in.readInt() != 0) {
      // cf. InStringVec
      throw new RDSException("names in persistent strings are not supported yet");
    }

    var length = in.readInt();
    var strings = new ArrayList<String>(length);

    for (int i = 0; i < length; i++) {
      strings.add(readChars());
    }

    return SEXPs.string(strings);
  }

  private ExprSXP readExpr(Flags flags) throws IOException {
    var length = in.readInt();
    var sexps = new ArrayList<SEXP>(length);
    for (int i = 0; i < length; i++) {
      sexps.add(readItem());
    }

    Attributes attributes = readAttributes(flags);
    return SEXPs.expr(sexps, attributes);
  }

  private BCodeSXP readByteCode() throws IOException {
    var length = in.readInt();
    var reps = new SEXP[length];
    return readByteCode1(reps);
  }

  private BCodeSXP readByteCode1(SEXP[] reps) throws IOException {
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
    return SEXPs.bcode(factory.create());
  }

  private List<SEXP> readByteCodeConsts(SEXP[] reps) throws IOException {
    var length = in.readInt();
    var consts = new ArrayList<SEXP>(length);
    for (int i = 0; i < length; i++) {
      var type = RDSItemType.valueOf(in.readInt());
      switch (type) {
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
    return consts;
  }

  private SEXP readByteCodeLang(RDSItemType type, SEXP[] reps) throws IOException {
    return switch (type) {
      case RDSItemType.Sexp s ->
          switch (s.sexp()) {
            case LANG, LIST -> readByteCodeLang1(type, reps);
            default -> readItem();
          };
      case RDSItemType.Special s ->
          switch (s) {
            case BCREPREF -> reps[in.readInt()];
            case BCREPDEF, ATTRLISTSXP, ATTRLANGSXP -> readByteCodeLang1(type, reps);
            default -> readItem();
          };
    };
  }

  private SEXP readByteCodeLang1(RDSItemType type, SEXP[] reps) throws IOException {
    var pos = -1;
    if (type == RDSItemType.Special.BCREPDEF) {
      pos = in.readInt();
      type = RDSItemType.valueOf(in.readInt());
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

    var head = readByteCodeLang(RDSItemType.valueOf(in.readInt()), reps);
    var tail = readByteCodeLang(RDSItemType.valueOf(in.readInt()), reps);

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

      var args = ansList.subList(1);

      ans = SEXPs.lang(funSymOrLang, args, attributes);
    }

    if (pos >= 0) {
      reps[pos] = ans;
    }

    return ans;
  }

  private SEXP readRef(Flags flags) throws IOException {
    var index = flags.unpackRefIndex();
    if (index == 0) {
      index = in.readInt();
    }
    return refTable.get(index - 1);
  }

  private LangSXP readLang(Flags flags) throws IOException {
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
    var flags = readFlags();
    if (!flags.getType().isSexp(SEXPType.CHAR)) {
      throw new RDSException("Expected CHAR");
    }
    var length = in.readInt();
    if (length == -1) {
      return Constants.NA_STRING;
    } else {
      return in.readString(length, nativeEncoding);
    }
  }

  private StrSXP readStrs(Flags flags) throws IOException {
    var length = in.readInt();
    var strings = ImmutableList.<String>builderWithExpectedSize(length);

    for (int i = 0; i < length; i++) {
      strings.add(readChars());
    }

    var attributes = readAttributes(flags);
    return SEXPs.string(strings.build(), attributes);
  }

  @SuppressFBWarnings("DLS_DEAD_LOCAL_STORE")
  private UserEnvSXP readEnv() throws IOException {
    var item = new UserEnvSXP();
    refTable.add(item);

    var locked = in.readInt();
    if (locked != 0 && locked != 1) {
      throw new RDSException("Expected 0 or 1 (LOCKED)");
    }

    // enclosing environment - parent
    switch (readItem()) {
      case EnvSXP parent -> item.setParent(parent);
      case NilSXP ignored -> item.setParent(rsession.baseEnv());
      default -> throw new RDSException("Expected environment (ENCLOS)");
    }

    // frame
    switch (readItem()) {
      case NilSXP ignored -> {}
      case ListSXP frame -> {
        for (var elem : frame) {
          item.set(Objects.requireNonNull(elem.tag()), elem.value());
        }
      }
      default -> throw new RDSException("Expected list (FRAME)");
    }

    // hashtab
    switch (readItem()) {
      case NilSXP ignored -> {}
      case VecSXP hashtab -> {
        for (var elem : hashtab) {
          switch (elem) {
            case NilSXP ignored -> {}
            case ListSXP list -> {
              for (var e : list) {
                item.set(Objects.requireNonNull(e.tag()), e.value());
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
    var length = in.readInt();
    var data = ImmutableList.<SEXP>builderWithExpectedSize(length);
    for (int i = 0; i < length; i++) {
      data.add(readItem());
    }
    var attributes = readAttributes(flags);
    return SEXPs.vec(data.build(), attributes);
  }

  private LglSXP readLogicals(Flags flags) throws IOException {
    var length = in.readInt();
    var data = in.readInts(length);
    var attributes = readAttributes(flags);
    return SEXPs.logical(
        Arrays.stream(data).mapToObj(Logical::valueOf).collect(ImmutableList.toImmutableList()),
        attributes);
  }

  private RealSXP readReals(Flags flags) throws IOException {
    var length = in.readInt();
    var data = in.readDoubles(length);
    var attributes = readAttributes(flags);
    return SEXPs.real(data, attributes);
  }

  private IntSXP readInts(Flags flags) throws IOException {
    var length = in.readInt();
    var data = in.readInts(length);
    var attributes = readAttributes(flags);
    return SEXPs.integer(data, attributes);
  }

  private ListSXP readList(Flags flags) throws IOException {
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

    return SEXPs.list(data.build());
  }

  private CloSXP readClosure(Flags flags) throws IOException {
    var attributes = readAttributes(flags);
    if (!(readItem() instanceof EnvSXP env)) {
      throw new RDSException("Expected CLOENV to be environment");
    }
    if (!(readItem() instanceof ListSXP formals)) {
      throw new RDSException("Expected closure FORMALS to be list");
    }
    var body = readItem();

    return SEXPs.closure(formals, body, env, attributes);
  }

  private @Nullable String readTag(Flags flags) throws IOException {
    if (flags.hasTag()) {
      if (readItem() instanceof RegSymSXP s) {
        return s.name();
      } else {
        throw new RDSException("Expected tag to be a symbol");
      }
    } else {
      return null;
    }
  }

  private Attributes readAttributes(Flags flags) throws IOException {
    if (flags.hasAttributes()) {
      return readAttributes();
    } else {
      return Attributes.NONE;
    }
  }

  private Attributes readAttributes() throws IOException {
    if (readItem() instanceof ListSXP xs) {
      var attrs = new Attributes.Builder();

      for (var x : xs) {
        var attr = x.tag();
        if (attr == null) {
          throw new RDSException("Expected tag");
        }
        attrs.put(attr, x.value());
      }

      return attrs.build();
    } else {
      throw new RDSException("Expected list");
    }
  }

  private RegSymSXP readSymbol() throws IOException {
    var flags = readFlags();
    var s = readString(flags);
    var item = SEXPs.symbol(s);

    refTable.add(item);

    return item;
  }

  private String readString(Flags flags) throws IOException {
    var len = in.readInt();
    var charset = StandardCharsets.US_ASCII;

    if (flags.isUTF8()) {
      charset = StandardCharsets.UTF_8;
    }

    return in.readString(len, charset);
  }

  private Flags readFlags() throws IOException {
    var raw = in.readInt();
    return new Flags(raw);
  }

  @Override
  public void close() throws IOException {
    in.close();
  }
}
