package nrc.rds;

import com.google.common.collect.Lists;
import nrc.RPlatform;
import nrc.sexp.*;
import nrc.util.Either;
import nrc.util.Pair;

import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.*;
import java.util.stream.Collectors;

class RDSInputStream implements AutoCloseable {
    private final DataInputStream in;

    RDSInputStream(InputStream in) {
        this.in = new DataInputStream(in);
    }

    @Override
    public void close() throws Exception {
        in.close();
    }

    public boolean isAtTheEnd() throws IOException {
        return in.available() == 0;
    }

    public byte readByte() throws IOException {
        return in.readByte();
    }

    public int readInt() throws IOException {
        return in.readInt();
    }

    public double readDouble() throws IOException {
        return in.readDouble();
    }

    public String readString(int natEncSize, Charset charset) throws IOException {
        var buf = new byte[natEncSize];
        in.readFully(buf, 0, natEncSize);
        return new String(buf, charset);
    }

    public int[] readInts(int length) throws IOException {
        int[] ints = new int[length];
        for (int i = 0; i < length; i++) {
            var n = readInt();
            ints[i] = n;
        }
        return ints;
    }

    public double[] readDoubles(int length) throws IOException {
        double[] ints = new double[length];
        for (int i = 0; i < length; i++) {
            var n = readDouble();
            ints[i] = n;
        }
        return ints;
    }
}

class RDSItemType {
    private RDSItemType() {
    }

    static final int REFSXP = 255;
    static final int NILVALUE_SXP = 254;
    static final int GLOBALENV_SXP = 253;
    static final int UNBOUNDVALUE_SXP = 252;
    static final int MISSINGARG_SXP = 251;
    static final int BASENAMESPACE_SXP = 250;
    static final int NAMESPACESXP = 249;
    static final int PACKAGESXP = 248;
    static final int PERSISTSXP = 247;
    static final int CLASSREFSXP = 246;
    static final int GENERICREFSXP = 245;
    static final int BCREPDEF = 244;
    static final int BCREPREF = 243;
    static final int EMPTYENV_SXP = 242;
    static final int BASEENV_SXP = 241;
    static final int ATTRLANGSXP = 240;
    static final int ATTRLISTSXP = 239;
}

class Flags {
    private static final int UTF8_MASK = (1 << 3);
    private static final int ATTR_MASK = (1 << 9);
    private static final int TAG_MASK = (1 << 10);

    private final int flags;

    public Flags(int flags) {
        this.flags = flags;
    }

    public int getType() {
        return flags & 255;
    }

    public int decodeLevels() {
        return flags >> 12;
    }

    public boolean isUTF8() {
        return (decodeLevels() & UTF8_MASK) != 0;
    }

    public boolean hasAttributes() {
        return (flags & ATTR_MASK) != 0;
    }

    public boolean hasTag() {
        return (flags & TAG_MASK) != 0;
    }

    public int unpackRefIndex() {
        return flags >> 8;
    }

}

public class RDSReader implements AutoCloseable, SEXPConsts {

    private final RDSInputStream in;
    private final List<SEXP> refTable = new ArrayList<>(128);

    // FIXME: this should include the logic from platform.c
    private Charset nativeEncoding = Charset.defaultCharset();

    public RDSReader(InputStream in) {
        this.in = new RDSInputStream(in);
    }

    public static SEXP readStream(InputStream input) throws Exception {
        // TODO: add @NotNull annotation
        Objects.requireNonNull(input, "input");

        try (var reader = new RDSReader(input)) {
            return reader.read();
        }
    }

    private void initialize() throws IOException {
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
        initialize();
        var sexp = readItem();
        if (!in.isAtTheEnd()) {
            throw new RDSException("Expected end of file");
        }
        return sexp;
    }

    private SEXP readItem() throws IOException {
        var flags = readFlags();

        return switch (flags.getType()) {
            case SEXPTypes.NILSXP -> NULL;
            case SEXPTypes.SYMSXP -> readSymbol();
            case SEXPTypes.CLOSXP -> readClosure(flags);
            case SEXPTypes.LISTSXP -> readList(flags);
            case SEXPTypes.INTSXP -> readInts(flags);
            case SEXPTypes.REALSXP -> readReals(flags);
            case SEXPTypes.LGLSXP -> readBools(flags);
            case SEXPTypes.VECSXP -> readVec(flags);
            case SEXPTypes.ENVSXP -> readEnv(flags);
            case SEXPTypes.STRSXP -> readStrs(flags);
            case SEXPTypes.LANGSXP -> readLang(flags);
            case SEXPTypes.BCODESXP -> readByteCode();
            case SEXPTypes.EXPRSXP -> readExpr(flags);
            // special RDS-only types
            case RDSItemType.NILVALUE_SXP -> NULL;
            case RDSItemType.MISSINGARG_SXP -> SEXPConsts.MISSING_ARG;
            case RDSItemType.EMPTYENV_SXP -> new EnvSXP();
            case RDSItemType.GLOBALENV_SXP -> SEXPConsts.GLOBAL_ENV;
            case RDSItemType.REFSXP -> readRef(flags);
            default -> throw new RDSException("Unsupported RDS item type: " + flags.getType());
        };
    }

    private VecSXP readExpr(Flags flags) throws IOException {
        var length = in.readInt();
        var sexps = new ArrayList<SEXP>(length);
        for (int i = 0; i < length; i++) {
            sexps.add(readItem());
        }
        return new VecSXP(sexps);
    }

    private BCodeSXP readByteCode() throws IOException {
        var length = in.readInt();
        var reps = new SEXP[length];
        return readByteCode1(reps);
    }

    private BCodeSXP readByteCode1(SEXP[] reps) throws IOException {
        var code = switch (readItem()) {
            case IntSXP s -> s;
            default -> throw new RDSException("Expected IntSXP");
        };

        if (code.get(0) != RPlatform.BC_VERSION) {
            throw new RDSException("Unsupported byte code version: " + code.get(0));
        }

        var consts = readByteCodeConsts(reps);
        return new BCodeSXP(code.getData(), consts);

    }

    private List<SEXP> readByteCodeConsts(SEXP[] reps) throws IOException {
        var length = in.readInt();
        var consts = new ArrayList<SEXP>(length);
        for (int i = 0; i < length; i++) {
            var type = in.readInt();
            switch (type) {
                case SEXPTypes.BCODESXP:
                    consts.add(readByteCode1(reps));
                    break;
                case RDSItemType.BCREPREF:
                case RDSItemType.BCREPDEF:
                case SEXPTypes.LANGSXP:
                case SEXPTypes.LISTSXP:
                case RDSItemType.ATTRLISTSXP:
                case RDSItemType.ATTRLANGSXP:
                    consts.add(readByteCodeLang(type, reps));
                    break;
                default:
                    consts.add(readItem());
            }
        }
        return consts;
    }

    private SEXP readByteCodeLang(int type, SEXP[] reps) throws IOException {
        switch (type) {
            case RDSItemType.BCREPREF:
                return reps[in.readInt()];
            case RDSItemType.BCREPDEF:
            case SEXPTypes.LANGSXP:
            case SEXPTypes.LISTSXP:
            case RDSItemType.ATTRLISTSXP:
            case RDSItemType.ATTRLANGSXP:
                var pos = -1;
                if (type == RDSItemType.BCREPDEF) {
                    pos = in.readInt();
                    type = in.readInt();
                }
                var attributes = Optional.ofNullable(
                        type == RDSItemType.ATTRLANGSXP || type == RDSItemType.ATTRLISTSXP ? readAttributes()
                                : null);

                SEXP tagSexp = NULL;
                SEXP ans;

                switch (type) {
                    case RDSItemType.ATTRLANGSXP:
                    case SEXPTypes.LANGSXP:
                        tagSexp = readItem();
                        assert tagSexp == NULL;

                        Either<SymSXP, LangSXP> fun = switch (readByteCodeLang(in.readInt(), reps)) {
                            case SymSXP s -> Either.left(s);
                            case LangSXP s -> Either.right(s);
                            default -> throw new RDSException("Expected symbol or language");
                        };

                        var args = readByteCodeLang(in.readInt(), reps);
                        ans = new LangSXP(fun, (ListSXP) args);
                        break;
                    case RDSItemType.ATTRLISTSXP:
                    case SEXPTypes.LISTSXP:
                        tagSexp = readItem();
                        Optional<String> tag;

                        if (tagSexp instanceof SymSXP sym) {
                            tag = Optional.of(sym.getName());
                        } else if (tagSexp instanceof NilSXP) {
                            tag = Optional.empty();
                        } else {
                            throw new RDSException("Expected symbol or nil");
                        }

                        var head = readByteCodeLang(in.readInt(), reps);
                        var tail = readByteCodeLang(in.readInt(), reps);

                        var data = Lists.newArrayList(Pair.of(tag, head));

                        switch (tail) {
                            case ListSXP list -> ListSXP.flatten(list, data);
                            case NilSXP n -> { // no action
                            }
                            default -> throw new RDSException("Expected list, got: " + tail.getType());
                        }

                        ans = new ListSXP(data);
                        break;

                    default:
                        throw new RDSException("Unexpected bclang type: " + type);
                }

                attributes.ifPresent(ans::setAttributes);

                if (pos >= 0) {
                    reps[pos] = ans;
                }

                return ans;

            default:
                return readItem();

        }
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

        Either<SymSXP, LangSXP> fun = switch (readItem()) {
            case SymSXP s -> Either.left(s);
            case LangSXP s -> Either.right(s);
            default -> throw new RDSException("Expected symbol or language");
        };

        var args = (ListSXP) readItem();
        var item = new LangSXP(fun, args);
        attributes.ifPresent(item::setAttributes);
        return item;
    }

    private String readChars() throws IOException {
        var flags = readFlags();
        assert flags.getType() == SEXPTypes.CHARSXP;
        var length = in.readInt();
        if (length == -1) {
            return SEXPConsts.NA_STRING;
        } else {
            return in.readString(length, nativeEncoding);
        }
    }

    private StrSXP readStrs(Flags flags) throws IOException {
        var length = in.readInt();
        var strings = new ArrayList<String>(length);

        for (int i = 0; i < length; i++) {
            strings.add(readChars());
        }

        var item = new StrSXP(strings);

        readAttributes(flags).ifPresent(item::setAttributes);

        return item;
    }

    private EnvSXP readEnv(Flags flags) throws IOException {
        var item = new EnvSXP();
        refTable.add(item);

        var locked = in.readInt();
        var enclos = readItem();
        var frame = readItem();
        var hashtab = readItem();

        item.setAttributes(readAttributes());

        // TODO: add content to the environment
        return item;
    }

    private VecSXP readVec(Flags flags) throws IOException {
        var length = in.readInt();
        var data = new ArrayList<SEXP>(length);
        for (int i = 0; i < length; i++) {
            data.add(readItem());
        }
        var item = new VecSXP(data);
        readAttributes(flags).ifPresent(item::setAttributes);
        return item;
    }

    private LglSXP readBools(Flags flags) throws IOException {
        var length = in.readInt();
        var data = in.readInts(length);
        var item = new LglSXP(Arrays.stream(data).boxed().collect(Collectors.toList()));
        readAttributes(flags).ifPresent(item::setAttributes);
        return item;
    }

    private RealSXP readReals(Flags flags) throws IOException {
        var length = in.readInt();
        var data = in.readDoubles(length);
        var item = new RealSXP(Arrays.stream(data).boxed().collect(Collectors.toList()));
        readAttributes(flags).ifPresent(item::setAttributes);
        return item;
    }

    private IntSXP readInts(Flags flags) throws IOException {
        var length = in.readInt();
        var data = in.readInts(length);
        var item = new IntSXP(Arrays.stream(data).boxed().collect(Collectors.toList()));
        readAttributes(flags).ifPresent(item::setAttributes);
        return item;
    }

    private ListSXP readList(Flags flags) throws IOException {
        var data = new ArrayList<Pair<Optional<String>, SEXP>>();

        while (flags.getType() != RDSItemType.NILVALUE_SXP) {
            var attributes = readAttributes(flags);

            var tag = switch (readTag(flags)) {
                case SymSXP s -> Optional.of(s.getName());
                case NilSXP ignored -> Optional.<String>empty();
                default -> throw new RDSException("Expected symbol or nil");
            };

            var item = readItem();

            attributes.ifPresent(item::setAttributes);

            data.add(Pair.of(tag, item));

            flags = readFlags();
        }

        return new ListSXP(data);
    }

    private CloSXP readClosure(Flags flags) throws IOException {
        var attributes = readAttributes(flags);
        var env = readItem();
        assert env.getType() == SEXPTypes.ENVSXP;
        var formals = readItem();
        assert formals.getType() == SEXPTypes.LISTSXP;
        var body = readItem();

        var item = new CloSXP((ListSXP) formals, body, (EnvSXP) env);

        attributes.ifPresent(item::setAttributes);

        return item;
    }

    private SEXP readTag(Flags flags) throws IOException {
        if (flags.hasTag()) {
            return readItem();
        } else {
            return NULL;
        }
    }

    private Optional<Attributes> readAttributes(Flags flags) throws IOException {
        if (flags.hasAttributes()) {
            return Optional.of(readAttributes());
        } else {
            return Optional.empty();
        }
    }

    private Attributes readAttributes() throws IOException {
        if (readItem() instanceof ListSXP xs) {
            var attrs = new Attributes();

            for (var x : xs) {
                var attr = x.a().orElseThrow(() -> new RDSException("Expected tag"));
                attrs.put(attr, x.b());
            }

            return attrs;
        } else {
            throw new RDSException("Expected list");
        }
    }

    private SymSXP readSymbol() throws IOException {
        var flags = readFlags();
        var s = readString(flags);
        var item = new SymSXP(s);

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
    public void close() throws Exception {
        in.close();
    }
}
