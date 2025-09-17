package org.prlprg.fir.check;

class ProvenanceCheckTest extends AbstractCheckTest {
  ProvenanceCheckTest() {
    super("provenance", new ProvenanceChecker());
  }
}
