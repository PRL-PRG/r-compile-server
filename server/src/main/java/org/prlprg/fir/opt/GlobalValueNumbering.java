package org.prlprg.fir.opt;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.util.Pair;
import org.prlprg.util.UnionFind;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Ownership;


import java.util.*;
import java.util.function.Supplier;


public class GlobalValueNumbering implements AbstractionOptimization{
    private final Supplier<UnionFind<Register>> UF;
    GlobalValueNumbering(Supplier<UnionFind<Register>> UF)
    {
        this.UF = UF;
    }

    @Override
    public boolean runWithoutRecording( @Nullable Function function, AbstractionFeedback feedback, Abstraction abstraction)  {
        if(abstraction.cfg() == null)
            return false;
        if(function != null && abstraction == function.baseline())
            return false;
        return new OnAbstraction(abstraction,abstraction.cfg(), UF.get()).run();
    }

    private static final class OnAbstraction {
        private final Abstraction scope;
        private final CFG cfg;
        private final UnionFind<Register> uf;

        OnAbstraction(Abstraction scope, CFG cfg, UnionFind<Register> uf) {
            this.scope = scope;
            this.cfg = cfg;
            this.uf = uf;
        }

        boolean run() {
            var analyses = new Analyses(scope, CfgDominatorTree.class);
            var dominatorTree = analyses.get(cfg, CfgDominatorTree.class);
            numberDominatorSubtree(cfg.entry(), Map.of(), dominatorTree);
            return renameAndEliminate(this.scope);
        }

        private void numberDominatorSubtree(BB bb,
                                            Map<Key, Register> init,
                                            CfgDominatorTree dom
        ) {
            Queue<Pair<BB, Map<Key, Register>>> que = new ArrayDeque<>();
            Set<BB> visited = new LinkedHashSet<BB>();
            visited.add(bb);
            que.add(new Pair<>(bb, init));
            while(! que.isEmpty())
            {
                var top = que.remove();
                var top_bb = top.first();
                var top_table = top.second();
                var top_bb_res = localValueNumbering(top_bb, top_table);
                visited.add(top_bb);
                for(var child : dom.immediateDominees(top_bb))
                    if(! visited.contains(child))
                        que.add(new Pair<>(child, top_bb_res));
            }
        }

        private Map<Key, Register> localValueNumbering(BB basicBlock, Map<Key, Register> inherited) {
            var table = new LinkedHashMap<Key, Register>(inherited);
            for (var instruction : basicBlock.statements()) {
                var lhs = instruction.assignee();
                if(lhs == null || !isEligibleForValueNumbering(instruction))
                    continue;
                var key = keyOf(lhs.statement());
                var earlier = table.get(key);
                if(earlier != null) {
                    this.uf.unionInto(earlier, lhs);
                }
                else {
                    table.put(key, lhs);
                }
            }
            return table;
        }

        private Key keyOf(Statement statement) {
            var args = statement.args().stream()
                    .map(arg -> arg instanceof Read(var register) ? new Read(this.uf.find(register)) : arg)
                    .toList();
            return new Key(statement.expression(), args);

        }

        private boolean renameAndEliminate(Abstraction version) {

            var redundant = version.streamRegisters()
                    .filter(r -> r instanceof AssigneeOf && this.uf.find(r) != r)
                    .map(r -> (AssigneeOf) r)
                    .toList();

            for (var r : redundant) r.substUsesWith(this.uf.find(r));
            for (var r : redundant) r.statement().remove();
            return !redundant.isEmpty();
        }

        private static boolean isEligibleForValueNumbering(Statement statement) {
            if (!(statement.expression() instanceof Call(StaticFnCallee callee)))
                return false;
            var signature = callee.signature();
            return signature.effects() == Effects.NONE
                    && signature.returnType().ownership() == Ownership.SHARED
                    && statement.args().stream().noneMatch(arg -> arg instanceof Consume);
        }
    }


    private record Key(Expression expr, List<Argument> ars){ }


}
