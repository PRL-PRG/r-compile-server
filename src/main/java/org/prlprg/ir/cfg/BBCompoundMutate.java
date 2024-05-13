package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.List;
import java.util.SequencedCollection;
import java.util.Set;
import java.util.function.Predicate;
import java.util.stream.Collectors;
import javax.annotation.Nullable;
import org.prlprg.ir.cfg.Stmt.Args;
import org.prlprg.ir.cfg.builder.BBInsertion;
import org.prlprg.ir.cfg.builder.JumpInsertion;
import org.prlprg.ir.cfg.builder.PhiInsertion;
import org.prlprg.ir.cfg.builder.StmtInsertion;
import org.prlprg.util.Strings;
import org.prlprg.util.Triple;

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
  default ImmutableList<? extends Stmt> append(List<Args<?>> namesAndArgs) {
    return insertAllAt(stmts().size(), namesAndArgs);
  }

  /**
   * Insert an instruction at the current insertion point. If the instruction is a phi and index
   * isn't 0, or if it's a jump and index isn't the end with the existing jump {@code null}, this
   * will split the BB.
   *
   * @param name A name of the instruction, or an empty string. This is useful for debugging and
   *     error messages.
   * @param args The instruction's arguments (data).
   * @return The inserted instruction.
   * @throws IndexOutOfBoundsException If the index is out of range.
   * @see #addPhi(Class, String, SequencedCollection)
   * @see #insertAt(int, String, StmtData)
   * @see #addJump(String, JumpData)
   */
  @SuppressWarnings("unchecked")
  default <I extends Instr> I insertAt(int index, String name, BBInsertion<? extends I> args) {
    return switch ((BBInsertion<?>) args) {
      case PhiInsertion<?> phiArgs -> {
        if (index != 0) {
          splitNewPredecessor(index);
        }
        yield (I) addPhi(phiArgs.nodeClass(), name, phiArgs.inputs());
      }
      case StmtInsertion<?>(var data) -> (I) insertAt(index, name, data);
      case JumpInsertion<?> jumpArgs -> {
        BB newSuccessor = null;
        if (index != stmts().size() || jump() != null) {
          newSuccessor = splitNewSuccessor(index);
        }
        yield (I) addJump(name, jumpArgs.compute(newSuccessor));
      }
    };
  }

  // endregion

  // region update (replace and subst)
  /**
   * Create a new instruction with {@code newArgs} and replace {@code oldInstrOrPhi} with it,
   * possibly splitting this block.
   *
   * <ul>
   *   <li>If {@code oldInstrOrPhi} is a phi and {@code newArgs} is for a statement, the new
   *       instruction will be inserted at the beginning of the block.
   *   <li>If {@code oldInstrOrPhi} is a jump and {@code newArgs} is for a statement, the new
   *       instruction will be inserted at the end and the block's jump will be {@code null}.
   *   <li>If {@code oldInstrOrPhi} isn't a jump is for a {@code newArgs} is for a jump, this block
   *       will be split at {@code oldInstrOrPhi}'s location, and the instructions and jump after
   *       will become a new block which will be this block's only successor.
   *   <li>If {@code oldInstrOrPhi} isn't a phi or the first instruction and {@code newArgs} is for
   *       a phi, this block will be split at {@code oldInstrOrPhi}'s location, and the phis and
   *       instructions before will become a new block which will be this block's only predecessor.
   *       <p><i>This won't replace occurrences of any return values of {@code oldInstr}.</i> Use
   *       {@link Instr#mutate(Instr, String, InstrData)} to do that if both instructions have the
   *       same # of return values, otherwise you must replace them manually (if there are any).
   *
   * @param newName A small name for the new instruction, an empty string, or {@code null} to take
   *     the old instruction's name (empty string makes the new instruction unnamed). This is useful
   *     for debugging and error messages.
   * @param newArgs The new instruction's arguments (data).
   * @return The new instructions.
   * @throws IllegalArgumentException if {@code oldInstr} is not in this BB.
   * @see #replaceNoSubst(InstrOrPhi, String, StmtData)
   */
  @SuppressWarnings("unchecked")
  default <I extends Stmt> I replaceNoSubst(
      InstrOrPhi oldInstrOrPhi, @Nullable String newName, BBInsertion<I> newArgs) {
    var newName1 = newName != null ? newName : oldInstrOrPhi.id().name();

    return cfg()
        .section(
            "BB#replace",
            () ->
                switch ((BBInsertion<?>) newArgs) {
                  case PhiInsertion<?> phiInsertion -> {
                    switch (oldInstrOrPhi) {
                      case Phi<?> oldPhi -> {
                        if (!contains(oldPhi)) {
                          throw new IllegalArgumentException("Not in " + id() + ": " + oldPhi);
                        }
                        remove(oldPhi);
                      }
                      case Stmt oldStmt -> {
                        var index = indexOf(oldStmt);
                        switch (index) {
                          case -1 ->
                              throw new IllegalArgumentException("Not in " + id() + ": " + oldStmt);
                          case 0 -> remove(oldStmt);
                          default -> splitNewPredecessor(index);
                        }
                      }
                      case Jump oldJump -> {
                        if (jump() != oldJump) {
                          throw new IllegalArgumentException("Not in " + id() + ": " + oldJump);
                        }
                        splitNewPredecessor(stmts().size());
                      }
                    }
                    yield (I) addPhi(phiInsertion.nodeClass(), newName1, phiInsertion.inputs());
                  }
                  case StmtInsertion<?>(var data) ->
                      (I) replaceNoSubst(oldInstrOrPhi, newName, data);
                  case JumpInsertion<?> jumpInsertion -> {
                    BB newBB;
                    switch (oldInstrOrPhi) {
                      case Phi<?> oldPhi -> {
                        if (!contains(oldPhi)) {
                          throw new IllegalArgumentException("Not in " + id() + ": " + oldPhi);
                        }
                        remove(oldPhi);
                        newBB = splitNewSuccessor(0);
                      }
                      case Stmt oldStmt -> {
                        var index = indexOf(oldStmt);
                        if (index == -1) {
                          throw new IllegalArgumentException("Not in " + id() + ": " + oldStmt);
                        } else if (index == stmts().size() && jump() == null) {
                          newBB = null;
                        } else {
                          newBB = splitNewSuccessor(index);
                        }
                      }
                      case Jump oldJump -> {
                        if (jump() != oldJump) {
                          throw new IllegalArgumentException("Not in " + id() + ": " + oldJump);
                        }
                        newBB = null;
                      }
                    }
                    yield (I) addJump(newName1, jumpInsertion.compute(newBB));
                  }
                });
  }

  /**
   * Create a new instruction with {@code newArgs} and replace {@code oldInstrOrPhi} with it.
   *
   * <ul>
   *   <li>If {@code oldInstrOrPhi} is a phi, the new instruction will be inserted at the beginning
   *       of the block.
   *   <li>If {@code oldInstrOrPhi} is a jump, the new instruction will be inserted at the end and
   *       the block's jump will be unset.
   * </ul>
   *
   * <p><i>This won't replace occurrences of any return values of {@code oldInstrOrPhi}.</i> Use
   * {@link Instr#mutate(Instr, String, InstrData)} to do that if both instructions have the same #
   * of return values, otherwise you must replace them manually (if there are any).
   *
   * @param newName A small name for the new instruction, an empty string, or {@code null} to take
   *     the old instruction's name (empty string makes the new instruction unnamed). This is useful
   *     for debugging and error messages.
   * @param newArgs The new instruction's arguments (data).
   * @return The new instructions.
   * @throws IllegalArgumentException if {@code oldInstr} is not in this BB.
   */
  default <I extends Stmt> I replaceNoSubst(
      InstrOrPhi oldInstrOrPhi, @Nullable String newName, StmtData<I> newArgs) {
    var newName1 = newName != null ? newName : oldInstrOrPhi.id().name();

    return cfg()
        .section(
            "BB#replace",
            () ->
                switch (oldInstrOrPhi) {
                  case Phi<?> oldPhi -> {
                    if (!contains(oldPhi)) {
                      throw new IllegalArgumentException("Not in " + id() + ": " + oldPhi);
                    }
                    remove(oldPhi);
                    yield insertAt(0, newName1, newArgs);
                  }
                  case Stmt oldStmt -> {
                    var index = stmts().indexOf(oldStmt);
                    if (index == -1) {
                      throw new IllegalArgumentException("Not in " + id() + ": " + oldStmt);
                    }
                    yield replace(index, newName, newArgs);
                  }
                  case Jump oldJump -> {
                    if (jump() != oldJump) {
                      throw new IllegalArgumentException("Not in " + id() + ": " + oldJump);
                    }
                    removeJump();
                    yield append(newName1, newArgs);
                  }
                });
  }

  /**
   * Replace multiple phis and/or instructions without affecting return value occurrences.
   *
   * @param oldInstrsAndNewNamesAndArgs Each element contains arguments which correspond to those in
   *     {@link #replaceNoSubst(InstrOrPhi, String, StmtData)}; that is, the old instruction, the
   *     new name (or {@code null} to reuse the old name), and new arguments.
   * @throws IllegalArgumentException if any of the old instructions aren't in this BB.
   * @see #replaceNoSubst(InstrOrPhi, String, StmtData)
   */
  default ImmutableList<? extends Stmt> replaceAllNoSubst(
      Collection<Triple<? extends InstrOrPhi, String, ? extends StmtData<?>>>
          oldInstrsAndNewNamesAndArgs) {
    return cfg()
        .section(
            "BB#replaceAll",
            () ->
                oldInstrsAndNewNamesAndArgs.stream()
                    .map(triple -> replaceNoSubst(triple.first(), triple.second(), triple.third()))
                    .collect(ImmutableList.toImmutableList()));
  }

  /**
   * Replace the sublist of statements from {@code fromIndex} to {@code toIndex} with new ones
   * provided by {@code newNamesAndArgs}.
   *
   * <p><i>This won't replace occurrences of any return values of old statements.</i> Use {@link
   * Instr#mutate(Instr, String, InstrData)} to do that if each statement has a corresponding one
   * and they both have the same # of return values, otherwise you must replace occurrences of the
   * old statements manually (if there are any).
   *
   * @param newNamesAndArgs The new statements' names and arguments (data). <i>Unlike in {@link
   *     #replace(int, String, StmtData)}, the names of each statement must be provided.</i>
   * @return The new statements.
   * @throws IllegalArgumentException If {@code fromIndex} is greater than {@code toIndex}.
   * @throws IndexOutOfBoundsException If {@code fromIndex} or {@code toIndex} are out of range. *
   * @see #replace(int, String, StmtData)
   */
  default ImmutableList<? extends Stmt> replaceAllNoSubst(
      int fromIndex, int toIndex, List<Args<?>> newNamesAndArgs) {
    return cfg()
        .section(
            "BB#replaceAll",
            () -> {
              if (fromIndex > toIndex) {
                throw new IllegalArgumentException(
                    "fromIndex > toIndex: " + fromIndex + " > " + toIndex);
              }
              if (fromIndex < 0 || toIndex >= stmts().size()) {
                throw new IndexOutOfBoundsException(
                    "Sublist out of range: " + fromIndex + " to " + toIndex);
              }

              removeAllAt(fromIndex, toIndex);
              return insertAllAt(fromIndex, newNamesAndArgs);
            });
  }

  // endregion

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
              var removedPhis = phis().stream().filter(predicate).toList();
              var removedStmts = stmts().stream().filter(predicate).toList();
              var removedJump = jump() != null && predicate.test(jump()) ? jump() : null;
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
