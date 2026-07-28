package org.prlprg.bc2c;

record BCell(int id, String name, int uses) {

  public BCell uses(int newUses) {
    return new BCell(id, name, newUses);
  }
}
