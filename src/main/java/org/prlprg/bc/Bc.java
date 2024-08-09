package org.prlprg.bc;

import com.google.common.primitives.ImmutableIntArray;
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.function.Function;
import javax.annotation.Nullable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Constants;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/**
 * A complete R bytecode, consisting of a version, array of instructions and associated data, and
 * constants.
 */
public record Bc(BcCode code, ConstPool consts) {

  /**
   * The only version of R bytecodes we support, which is also the latest version. The bytecode's
   * version is denoted by the first integer in its code.
   */
  public static final int R_BC_VERSION = 12;

  /**
   * Create a bytecode which has no code or constants.
   *
   * <p>This is necessary when we need to store a non-null value or stub.
   */
  public static Bc empty() {
    return new Builder().build();
  }

  public static class Builder {
    private final BcCode.Builder code;
    private final ConstPool.Builder consts;
    private final List<BcLabel> labels = new ArrayList<>();
    private final ImmutableIntArray.Builder expressions =
        ImmutableIntArray.builder()
            // to have the same length as codeBuf
            .add(Constants.NA_INT);
    private final ImmutableIntArray.Builder srcRefs =
        ImmutableIntArray.builder()
            // to have the same length as codeBuf
            .add(Constants.NA_INT);

    private @Nullable SEXP currentExpr = null;
    private @Nullable IntSXP currentSrcRef = null;
    private boolean trackSrcRefs = true;
    private boolean trackExpressions = true;
    private final Map<Integer, Function<BcInstr, BcInstr>> patches = new LinkedHashMap<>();

    public Builder() {
      this(Collections.emptyList());
    }

    public Builder(List<SEXP> consts) {
      code = new BcCode.Builder();
      this.consts = new ConstPool.Builder(consts);
    }

    public void setTrackSrcRefs(boolean track) {
      this.trackSrcRefs = track;
    }

    public void setTrackExpressions(boolean track) {
      this.trackExpressions = track;
    }

    /** Append a constant and return its index. */
    public <S extends SEXP> ConstPool.Idx<S> addConst(S c) {
      return consts.add(c);
    }

    /** Append an instruction. */
    public int addInstr(BcInstr instr) {
      var idx = code.size();
      code.add(instr);

      if (trackExpressions) {
        assert currentExpr != null;
        for (var i = 0; i <= instr.op().nArgs(); i++) {
          expressions.add(addConst(currentExpr).idx());
        }
      }

      if (trackSrcRefs) {
        assert currentSrcRef != null;
        for (var i = 0; i <= instr.op().nArgs(); i++) {
          srcRefs.add(addConst(currentSrcRef).idx());
        }
      }

      return idx;
    }

    public BcLabel makeLabel() {
      var l = new BcLabel(labels.size());
      labels.add(l);
      return l;
    }

    void patchLabel(BcLabel label) {
      label.setTarget(code.size());
    }

    /**
     * Finish building the bytecode.
     *
     * @return The bytecode.
     */
    public Bc build() {
      // this is the cb$patchlabels()
      patches.forEach(code::patch);

      // this is the cb$commitlocs()
      if (trackExpressions) {
        var expressionsIndex = SEXPs.integer(expressions.build()).withClass("expressionsIndex");
        addConst(expressionsIndex);
      }

      if (trackSrcRefs) {
        var srcRefsIndex = SEXPs.integer(srcRefs.build()).withClass("srcrefsIndex");
        addConst(srcRefsIndex);
      }

      return new Bc(code.build(), consts.build());
    }

    public void setCurrentLoc(Loc loc) {
      if (trackExpressions) {
        this.currentExpr = loc.expr();
      }

      if (trackSrcRefs && loc.srcRef() != null) {
        this.currentSrcRef = loc.srcRef();
      }
    }

    public Loc getCurrentLoc() {
      return new Loc(trackExpressions ? currentExpr : null, trackSrcRefs ? currentSrcRef : null);
    }

    public void addInstrPatch(int instrIdx, Function<BcInstr, BcInstr> patch) {
      patches.put(instrIdx, patch);
    }
  }

  // region serialization and deserialization
  @ParseMethod
  private static Bc parse(Parser p) {
    var code = p.parse(BcCode.class);
    var consts = p.parse(ConstPool.class);
    return new Bc(code, consts);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(code);
    p.writer().write('\n');
    p.print(consts);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
