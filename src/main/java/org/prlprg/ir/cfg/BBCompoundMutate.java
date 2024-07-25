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
   * @param data The statement's data, which determines what kind of statement it is and its inputs.
   * @return Ths inserted statement.
   */
  default Stmt append(StmtData data) {
    return insertAt(stmts().size(), data);
  }

  /**
   * Insert statements at the end of the current {@link BB}.
   *
   * @param datas The statements' datas, which determine what kind of statements they are and their inputs.
   * @return Ths inserted statements.
   * @see #append(StmtData)
   */
  default ImmutableList<Stmt> append(List<StmtData> datas) {
    return insertAllAt(stmts().size(), datas);
  }

  /**
   * Insert a jump at the given insertion point, splitting the BB.
   *
   * @param insertion Computes the jump's data (kind and inputs) given the new successor.
   * @return The inserted jump.
   * @throws IndexOutOfBoundsException If the index is out of range.
   * @see #insertAt(int, StmtData)
   * @see #addJump(JumpData)
   */
  default Jump insertAt(int index, JumpInsertion insertion) {
    return cfg()
        .section(
            "BB#insertAt(int, JumpInsertion)",
            () -> {
              var newSuccessor = splitNewSuccessor(index);
              return replaceJump(insertion.compute(newSuccessor));
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
                removePhis(phis);
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
              removePhis(removedPhis);
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

  // endregion remove

  // region move
  /**
   * Move an instruction to a new index and possibly basic block.
   *
   * <p>If the instruction is a statement, this is equivalent to {@link #moveStmt(int, BB, int)}. If
   * it's a jump, this asserts that {@code newIndex} is at the end of {@code newBB}, then is
   * equivalent to {@link #moveJump(BB)}.
   *
   * @throws IllegalArgumentException If the new BB isn't in the same {@link CFG} as this one.
   * @throws IndexOutOfBoundsException If the old index is out of bounds for access in this block's
   *     list of <i>instructions</i> (less than 0 or greater than or equal to the number of
   *     instructions). <b>OR</b> if the new index is out of bounds for insertion in the new block's
   *     list of <i>statements</i> (less than 0 or greater than the number of statements).
   */
  default void moveInstr(int oldIndex, BB newBb, int newIndex) {
    if (newBb.cfg() != cfg()) {
      throw new IllegalArgumentException("Can't move between different CFGs");
    }
    if (oldIndex < 0 || oldIndex >= numInstrs()) {
      throw new IndexOutOfBoundsException(
          "Old index out of range in " + id() + " (instructions): " + oldIndex);
    }
    if (newIndex < 0 || newIndex > newBb.stmts().size()) {
      throw new IndexOutOfBoundsException(
          "New index out of range in " + newBb.id() + " (statements): " + newIndex);
    }
    if (oldIndex == stmts().size() && newIndex != newBb.stmts().size()) {
      throw new IllegalArgumentException(
          "Can't move jump to the middle of "
              + newBb.id()
              + " (index = "
              + newIndex
              + ", # statements = "
              + newBb.stmts().size()
              + ")");
    }

    if (oldIndex == stmts().size()) {

      assert jump() != null;
      moveJump(newBb);
    } else {
      moveStmt(oldIndex, newBb, newIndex);
    }
  }

  /**
   * Move a sequence of instructions (exclusive range) to a new index and possibly basic block.
   *
   * <p>If the instructions are all statements, this is equivalent to {@link #moveStmts(int, int,
   * BB, int)}. If they include a jump, this asserts that {@code newFromIndex} is at the end of
   * {@code newBB}, then is equivalent to first calling {@link #moveStmts(int, int, BB, int)} if
   * there are any preceding statements, then {@link #moveJump(BB)}.
   *
   * @throws IllegalArgumentException If the new BB isn't in the same {@link CFG} as this one.
   *     <b>OR</b> if {@code oldFromIndex} is greater than {@code oldToIndex}.
   * @throws IndexOutOfBoundsException If the old index range is out of bounds for access in this
   *     block's list of <i>instructions</i> (start less than 0 or end greater than the number of
   *     instructions). <b>OR</b> if the new index is out of bounds for insertion in the new block's
   *     list of <i>statements</i> (less than 0 or greater than the number of statements).
   */
  default void moveInstrs(int oldFromIndex, int oldToIndex, BB newBb, int newFromIndex) {
    if (newBb.cfg() != cfg()) {
      throw new IllegalArgumentException("Can't move between different CFGs");
    }
    if (oldFromIndex > oldToIndex) {
      throw new IllegalArgumentException(
          "oldFromIndex > oldToIndex: " + oldFromIndex + " > " + oldToIndex);
    }
    if (oldFromIndex < 0 || oldToIndex > numInstrs()) {
      throw new IndexOutOfBoundsException(
          "Old sublist out of range in "
              + id()
              + " (instructions): "
              + oldFromIndex
              + " to "
              + oldToIndex);
    }
    if (newFromIndex < 0 || newFromIndex > newBb.stmts().size()) {
      throw new IndexOutOfBoundsException(
          "New index out of range in " + newBb.id() + " (statements): " + newFromIndex);
    }
    if (oldToIndex > stmts().size() && newFromIndex != newBb.stmts().size()) {
      throw new IllegalArgumentException(
          "Can't move jump to the middle of "
              + newBb.id()
              + " (index = "
              + newFromIndex
              + ", # statements = "
              + newBb.stmts().size()
              + ")");
    }

    if (oldFromIndex == oldToIndex) {
      return;
    }

    if (oldToIndex == numInstrs()) {
      assert jump() != null;
      cfg()
          .section(
              "BB#moveInstrs",
              () -> {
                moveStmts(oldFromIndex, oldToIndex - 1, newBb, newFromIndex);
                moveJump(newBb);
              });
    } else {
      moveStmts(oldFromIndex, oldToIndex, newBb, newFromIndex);
    }
  }
  // endregion move
}
