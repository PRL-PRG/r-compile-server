package org.prlprg.ir.analysis;

import com.google.common.collect.ImmutableList;
import java.util.HashMap;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.cfg.RValueStmt;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.ir.cfg.StmtData.LdVar;
import org.prlprg.ir.cfg.StmtData.StVar;

/**
 * Heavyweight scope analysis (from PIR).
 *
 * <p>This analysis soundly traces all stores (e.g. {@link StVar}) and gives a static approximation
 * for all loads (e.g. {@link LdVar}).
 */
@Immutable
public class Scopes {

  /**
   * Configure the "strength" of the scope analysis.
   *
   * <p>More strength = more precision, but more time and memory.
   *
   * <p>TODO: Make configurable via environment variables.
   */
  public record Config(
      int maxDepth, int maxSize, int maxPromSize, int maxResults, int maxSubAnalysis) {
    /** The default config, if no environment variables are set. */
    public static final Config DEFAULT = new Config(2, 120, 14, 800, 10);
  }

  private final ImmutableList<RValueStmt> args;
  private final int depth;

  // Results
  private final Map<Instr, Load> results = new HashMap<>();

  /** Computes scopes in the given CFG. */
  public Scopes(CFG cfg, boolean isInPromise) {
    RValue staticClosureEnv = StaticEnv.NOT_CLOSED;
    var canDeopt = cfg.canDeopt();
  }
}
