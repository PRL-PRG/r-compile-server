package org.prlprg.rds;

import com.google.common.collect.ImmutableList;
import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import javax.annotation.Nullable;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcFromRawException;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.*;
import org.prlprg.util.NotImplementedError;

public class RDSReader implements Closeable {
  private final RDSInputStream in;
  private final List<SEXP> refTable = new ArrayList<>(128);

  // FIXME: this should include the logic from platform.c
  private Charset nativeEncoding = Charset.defaultCharset();

  private RDSReader(InputStream in) {
    this.in = new RDSInputStream(in);
  }

  public static SEXP readStream(InputStream input) throws IOException {
    try (var reader = new RDSReader(input)) {
      return reader.read();
    }
  }

  public static SEXP readFile(Path path) throws IOException {
    return readStream(Files.newInputStream(path));
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
    // writer version
    in.readInt();
    // minimal reader version
    in.readInt();

    // native encoding for version == 3
    switch (formatVersion) {
      case 2:
        break;
      case 3:
        var natEncSize = in.readInt();
        nativeEncoding = Charset.forName(in.readString(natEncSize, StandardCharsets.US_ASCII));
        break;
      default:
        throw new RDSException("Unsupported version: " + formatVersion);
    }
  }

  public SEXP read() throws IOException {
    readHeader();
    var sexp = readItem();
    if (!in.isAtEnd()) {
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
            case EXPR -> readExpr();
            default -> throw new RDSException("Unsupported SEXP type: " + s.sexp());
          };
      case RDSItemType.Special s ->
          switch (s) {
            case NILVALUE_SXP -> SEXPs.NULL;
            case MISSINGARG_SXP -> SEXPs.MISSING_ARG;
            case GLOBALENV_SXP -> SEXPs.GLOBAL_ENV;
            case BASEENV_SXP -> SEXPs.BASE_ENV;
            case EMPTYENV_SXP -> SEXPs.EMPTY_ENV;
            case REFSXP -> readRef(flags);
            case BCREPDEF, BCREPREF ->
                throw new RDSException("Unexpected bytecode reference here (not in bytecode)");
            case ATTRLANGSXP, ATTRLISTSXP -> throw new RDSException("Unexpected attr here");
            case UNBOUNDVALUE_SXP,
                    GENERICREFSXP,
                    BASENAMESPACE_SXP,
                    NAMESPACESXP,
                    PACKAGESXP,
                    PERSISTSXP,
                    CLASSREFSXP ->
                throw new NotImplementedError();
          };
    };
  }

  private ExprSXP readExpr() throws IOException {
    // ??? Should flags be used somewhere here? At least for sanity assertions?
    var length = in.readInt();
    var sexps = new ArrayList<SEXP>(length);
    for (int i = 0; i < length; i++) {
      sexps.add(readItem());
    }
    return SEXPs.expr(sexps);
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

    var consts = readByteCodeConsts(reps);
    try {
      return SEXPs.bcode(Bc.fromRaw(code.data(), consts));
    } catch (BcFromRawException e) {
      throw new RDSException("Error reading bytecode", e);
    }
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

    SEXP tagSexp;
    SEXP ans;

    if (type.isSexp(SEXPType.LANG) || type == RDSItemType.Special.ATTRLANGSXP) {
      tagSexp = readItem();
      if (tagSexp != SEXPs.NULL) {
        throw new RDSException("Expected NULL tag");
      }

      var fun = readByteCodeLang(RDSItemType.valueOf(in.readInt()), reps);
      if (!(fun instanceof SymOrLangSXP funSymOrLang)) {
        throw new RDSException("Expected symbol or language, got: " + fun.type());
      }

      var args = readByteCodeLang(RDSItemType.valueOf(in.readInt()), reps);
      if (!(args instanceof ListSXP argsList)) {
        throw new RDSException("Expected list, got: " + args.type());
      }

      ans = SEXPs.lang(funSymOrLang, argsList, attributes);
    } else if (type.isSexp(SEXPType.LIST) || type == RDSItemType.Special.ATTRLISTSXP) {
      tagSexp = readItem();
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

      var data = new ImmutableList.Builder<TaggedElem>();
      data.add(new TaggedElem(tag, head));

      if (!(tail instanceof ListSXP tailList)) {
        throw new RDSException("Expected list, got: " + tail.type());
      }
      ListSXP.flatten(tailList, data);

      ans = SEXPs.list(data.build(), attributes);
    } else {
      throw new RDSException("Unexpected bclang type: " + type);
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

  private LocalEnvSXP readEnv() throws IOException {
    // ??? Should flags be used somewhere here? At least for sanity assertions?
    var item = RegEnvSXP.uninitialized();
    refTable.add(item);

    var locked = in.readInt();
    if (locked != 0 && locked != 1) {
      throw new RDSException("Expected 0 or 1 (LOCKED)");
    }
    if (!(readItem() instanceof EnvSXP enclos)) {
      throw new RDSException("Expected environment (ENCLOS)");
    }
    if (!(readItem() instanceof ListSXP frame)) {
      throw new RDSException("Expected list (FRAME)");
    }
    // We read the hash table,
    // but immediately discard it because we represent environments differently and it's
    // redundant.
    readItem();
    var attributes = readAttributes();

    item.init(locked != 0, enclos, frame, attributes);
    return item;
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
