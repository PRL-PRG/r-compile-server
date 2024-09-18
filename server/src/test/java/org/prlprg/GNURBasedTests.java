package org.prlprg;

import org.junit.jupiter.api.AfterAll;
import org.prlprg.rsession.TestRSession;
import org.prlprg.util.GNUR;
import org.prlprg.util.GNURFactory;

public interface GNURBasedTests {
    RSession Rsession = new TestRSession();
    GNUR R = GNURFactory.createRestarting(Rsession);

    @AfterAll
    static void stopR() throws Exception {
        R.close();
    }
}
