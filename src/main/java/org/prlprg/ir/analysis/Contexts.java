package org.prlprg.ir.analysis;

import com.google.common.collect.ImmutableList;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.stream.Stream;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.cfg.RContext;
import org.prlprg.ir.cfg.instr.JumpData.Deopt;
import org.prlprg.ir.cfg.instr.JumpData.Unreachable;
import org.prlprg.ir.cfg.instr.StmtData.PopContext;
import org.prlprg.ir.cfg.instr.StmtData.PushContext;
import org.prlprg.util.Pair;
import org.prlprg.util.Strings;

/**
 * Analysis to find the stack of pushed contexts at any particular instruction in a {@linkplain CFG
 * control-flow graph}.
 *
 * <p>This is essentially the PIR algorithm re-written in Java.
 */
@Immutable
public class Contexts {
  private final Map<BB, ImmutableList<RContext>> atEntry = new HashMap<>();
  private final Map<Instr, ImmutableList<RContext>> afterInstr = new HashMap<>();

  /** The pushed contexts at the entry of the given basic block. */
  public ImmutableList<RContext> atEntry(BB bb) {
    return atEntry.get(bb);
  }

  /** The pushed contexts after the given instruction. */
  public ImmutableList<RContext> afterInstr(Instr instr) {
    return afterInstr.get(instr);
  }

  /** Computes the stack of pushed contexts at every instruction in the given CFG. */
  public Contexts(CFG cfg) {
    // This is a basic abstract interpretation, where the context stack is the state, and we assume
    // it's the same at every instruction.
    var worklist = new LinkedHashSet<Pair<BB, ImmutableList<RContext>>>();
    worklist.add(Pair.of(cfg.entry(), ImmutableList.of()));

    while (!worklist.isEmpty()) {
      var bbAndContexts = worklist.removeFirst();
      var bb = bbAndContexts.first();
      var contexts = bbAndContexts.second();

      // Sanity check; this isn't needed if it's slow.
      for (var pred : bb.predecessors()) {
        assert pred.jump() != null;
        assert !afterInstr.containsKey(pred.jump()) || afterInstr.get(pred.jump()).equals(contexts)
            : "predecessors of "
                + bb.id()
                + " have different contexts: ["
                + Strings.join(", ", Node::id, contexts)
                + "] (at entry) vs ["
                + Strings.join(", ", Node::id, afterInstr.get(pred.jump()))
                + "] (at "
                + pred.id()
                + " exit)";
      }

      atEntry.put(bb, contexts);
      for (var instr : bb.instrs()) {
        // Compute new contexts
        switch (instr.data()) {
            // This would be a good opportunity for a shared linked list, if it was efficient.
          case PushContext _ ->
              contexts =
                  Stream.concat(contexts.stream(), Stream.of((RContext) instr))
                      .collect(ImmutableList.toImmutableList());
          case PopContext _ -> contexts = contexts.subList(0, contexts.size() - 1);
          case Deopt _, Unreachable _ -> contexts = ImmutableList.of();
          default -> {}
        }

        afterInstr.put(instr, contexts);
      }

      for (var succ : bb.successors()) {
        if (!atEntry.containsKey(succ)) {
          worklist.add(Pair.of(succ, contexts));
        }

        // Another sanity check
        assert !atEntry.containsKey(succ) || atEntry.get(succ).equals(contexts)
            : "successors of "
                + bb.id()
                + " have different contexts: ["
                + Strings.join(", ", Node::id, contexts)
                + "] (at exit) vs ["
                + Strings.join(", ", Node::id, atEntry.get(succ))
                + "] (at "
                + succ.id()
                + " entry)";
      }
    }
  }
}
