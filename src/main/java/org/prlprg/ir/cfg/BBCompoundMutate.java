package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.List;
import java.util.Set;
import java.util.function.Predicate;
import java.util.stream.Collectors;
import org.prlprg.ir.cfg.builder.JumpInsertion;
import org.prlprg.util.Strings;

public interface BBCompoundMutate extends BBIntrinsicMutate, BBQuery {
  // region insert
  /**
   * Insert a statement at the end of the current {@link BB}.
   *
   * @param name A small name for the statement, or an empty string. This is useful for debugging
   *     and error messages.
   * @param args The statement's arguments (data).
   * @return Ths inserted statement.
   */
  default <I extends Stmt> I append(String name, StmtData<I> args) {
    return insertAt(stmts().size(), name, args);
  }

  /**
   * Insert statements at the end of the current {@link BB}.
   *
   * @param namesAndArgs The name and argument of each statement. See {@link #append(String,
   *     StmtData)}.
   * @return Ths inserted statements.
   * @see #append(String, StmtData)
   */
  default ImmutableList<? extends Stmt> append(List<Stmt.Args> namesAndArgs) {
    return insertAllAt(stmts().size(), namesAndArgs);
  }

  /**
   * Insert a jump at the given insertion point, splitting the BB.
   *
   * @param name A name of the jump, or an empty string. This is useful for debugging and error
   *     messages.
   * @param insertion Computes the jump's data (arguments) given the new successor.
   * @return The inserted jump.
   * @throws IndexOutOfBoundsException If the index is out of range.
   * @see #insertAt(int, String, StmtData)
   * @see #addJump(String, JumpData)
   */
  default <I extends Jump> I insertAt(
      int index, String name, JumpInsertion<? extends I> insertion) {
    return cfg()
        .section(
            "BB#insertAt(int, String, JumpInsertion)",
            () -> {
              var newSuccessor = splitNewSuccessor(index);
              return replaceJump(name, insertion.compute(newSuccessor));
            });
  }

  // endregion insert

  // region remove
  /**
   * Remove the given instruction.
   *
   * <p>Other instructions may still reference it, but these references must go away before {@link
   * CFG#verify()}.
   *
   * @throws IllegalArgumentException if it's not in this BB.
   */
  default void remove(InstrOrPhi instr) {
    switch (instr) {
      case Phi<?> phi -> {
        if (!contains(phi)) {
          throw new IllegalArgumentException("Not in " + id() + ": " + instr);
        }
        remove(phi);
      }
      case Stmt stmt -> {
        var index = indexOf(stmt);
        if (index == -1) {
          throw new IllegalArgumentException("Not in " + id() + ": " + instr);
        }
        removeAt(index);
      }
      case Jump jmp -> {
        if (jump() == jmp) {
          removeJump();
        } else {
          throw new IllegalArgumentException("Not in " + id() + ": " + instr);
        }
      }
    }
  }

  /**
   * Remove the given instructions. Other instructions may still reference them, but these
   * references must go away before {@link CFG#verify()}.
   *
   * @throws IllegalArgumentException if any aren't in this BB.
   * @see #remove(InstrOrPhi)
   */
  default void removeAll(Collection<? extends InstrOrPhi> instrsOrPhis) {
    cfg()
        .section(
            "BB#removeAll",
            () -> {
              var grouped =
                  instrsOrPhis.stream()
                      .collect(
                          Collectors.groupingBy(
                              i ->
                                  switch (i) {
                                    case Phi<?> _ -> Phi.class;
                                    case Stmt _ -> Stmt.class;
                                    case Jump _ -> Jump.class;
                                  },
                              Collectors.toSet()));
              @SuppressWarnings("unchecked")
              var phis = (Set<Phi<?>>) grouped.get(Phi.class);
              @SuppressWarnings("unchecked")
              var stmts = (Set<Stmt>) grouped.get(Stmt.class);
              var jump =
                  grouped.containsKey(Jump.class)
                      ? (Jump) grouped.get(Jump.class).iterator().next()
                      : null;

              if (phis != null) {
                var oldNumPhis = phis().size();
                removeAllPhis(phis);
                if (phis().size() != oldNumPhis - phis.size()) {
                  throw new IllegalArgumentException(
                      "Not all removed phis were in " + id() + ":\n- " + Strings.join("\n-", phis));
                }
              }
              if (stmts != null) {
                var oldNumStmts = stmts().size();
                removeAllStmts(stmts);
                if (stmts().size() != oldNumStmts - stmts.size()) {
                  throw new IllegalArgumentException(
                      "Not all removed stmts were in "
                          + id()
                          + ":\n- "
                          + Strings.join("\n-", stmts));
                }
              }
              if (jump != null) {
                if (jump == jump()) {
                  removeJump();
                } else {
                  throw new IllegalArgumentException(
                      "Removed jump not wasn't in " + id() + ":\n- " + jump);
                }
              }
            });
  }

  /**
   * Remove phis and instructions which fail the predicate (return false). Other instructions may
   * still reference them, but these references must go away before {@link CFG#verify()}.
   *
   * @see #remove(InstrOrPhi)
   */
  default void filter(Predicate<InstrOrPhi> predicate) {
    cfg()
        .section(
            "BB#filter",
            () -> {
              var removedPhis = phis().stream().filter(Predicate.not(predicate)).toList();
              var removedStmts = stmts().stream().filter(Predicate.not(predicate)).toList();
              var removedJump = jump() != null && !predicate.test(jump()) ? jump() : null;
              removeAllPhis(removedPhis);
              removeAllStmts(removedStmts);
              if (removedJump != null) {
                remove(removedJump);
              }
            });
  }

  /**
   * Remove phis and instructions which pass the predicate (true false). Other instructions may
   * still reference them, but these references must go away before {@link CFG#verify()}.
   *
   * @see #filter(Predicate)
   * @see #remove(InstrOrPhi)
   */
  default void removeWhere(Predicate<InstrOrPhi> predicate) {
    filter(Predicate.not(predicate));
  }
  // endregion
}
