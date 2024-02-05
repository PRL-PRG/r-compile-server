package org.prlprg.bc;

import org.prlprg.sexp.EnvSXP;

import java.util.ArrayList;
import java.util.List;

/**
 * Represents a compilation environment
 */
public record Environment(List<Frame> frames) {
    public static Environment fromEnv(EnvSXP env) {
        var frames = new ArrayList<Frame>();
        env.visit(x -> frames.add(new Frame.Global(x)));

        return new Environment(frames);
    }

    public void add(Frame frame) {
        frames.add(frame);
    }
}
