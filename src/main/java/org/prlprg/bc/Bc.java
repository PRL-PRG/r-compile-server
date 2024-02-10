package org.prlprg.bc;

import com.google.common.primitives.ImmutableIntArray;
import java.util.*;
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
   * Create from the raw GNU-R representation, bytecodes not including the initial version number.
   */
  public static Bc fromRaw(ImmutableIntArray bytecodes, List<SEXP> consts)
      throws BcFromRawException {
    var poolAndMakeIdx = ConstPool.fromRaw(consts);
    var pool = poolAndMakeIdx.first();
    var makePoolIdx = poolAndMakeIdx.second();
    try {
      return new Bc(BcCode.fromRaw(bytecodes, makePoolIdx), pool);
    } catch (BcFromRawException e) {
      throw new BcFromRawException("malformed bytecode\nConstants: " + pool, e);
    }
  }

  @Override
  public String toString() {
    return code + "\n" + consts;
  }

  public static class Builder {
    private final BcCode.Builder code = new BcCode.Builder();
    private final ConstPool.Builder consts = new ConstPool.Builder();
    private final List<BcLabel> labels = new ArrayList<>();
    private final ImmutableIntArray.Builder expressions =
        ImmutableIntArray.builder()
            // to have the same length as codeBuf
            .add(Constants.NA_INT);
    private final ImmutableIntArray.Builder srcRefs =
        ImmutableIntArray.builder()
            // to have the same length as codeBuf
            .add(Constants.NA_INT);
    private final Stack<SEXP> currentExpr = new Stack<>();
    private final Stack<IntSXP> currentSrcRef = new Stack<>();
    private boolean trackSrcRefs = true;
    private boolean trackExpressions = true;

    public void setTrackSrcRefs(boolean track) {
      this.trackSrcRefs = track;
    }

    public void setTrackExpressions(boolean track) {
      this.trackExpressions = track;
    }

    /** Append a constant and return its index. */
    public <S extends SEXP> ConstPool.TypedIdx<S> addConst(S c) {
      return consts.add(c);
    }

    /** Append an instruction. */
    public void addInstr(BcInstr instr) {
      code.add(instr);

      if (trackExpressions) {
        assert (!currentExpr.isEmpty());
        for (var i = 0; i <= instr.op().nArgs(); i++) {
          // R uses 1-based indexing
          expressions.add(addConst(currentExpr.peek()).idx);
        }
      }

      if (trackSrcRefs) {
        for (var i = 0; i <= instr.op().nArgs(); i++) {
          assert (!currentSrcRef.isEmpty());
          // R uses 1-based indexing
          srcRefs.add(addConst(currentSrcRef.peek()).idx);
        }
      }
    }

    public BcLabel makeLabel() {
      var l = new BcLabel(labels.size());
      labels.add(l);
      return l;
    }

    public void patchLabel(BcLabel label) {
      label.setTarget(code.size());
    }

    /**
     * Finish building the bytecode.
     *
     * @return The bytecode.
     */
    public Bc build() {
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

    public void pushLoc(Loc loc) {
      currentExpr.push(loc.expr());
      if (trackSrcRefs) {
        var srcRef = loc.srcRef();
        currentSrcRef.push(srcRef != null ? srcRef : currentSrcRef.peek());
      }
    }

    public void popLoc() {
      currentExpr.pop();
      if (trackSrcRefs) {
        currentSrcRef.pop();
      }
    }

    public Loc getCurrentLoc() {
      return new Loc(currentExpr.peek(), trackSrcRefs ? currentSrcRef.peek() : null);
    }
  }
}
