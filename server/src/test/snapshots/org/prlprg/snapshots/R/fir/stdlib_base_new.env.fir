fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner225796480;
    st `new.env` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner225796480(hash, parent, size) {
  (reg hash:*, reg parent:*, reg size:*) -+> V { var hash:*, reg hash_isMissing:L, reg hash_orDefault:*, var parent:*, reg parent_isMissing:L, reg parent_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var size:*, reg size_isMissing:L, reg size_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg hash1:*, reg hash2:V, reg parent1:*, reg parent2:V, reg size1:*, reg size2:V, reg new_env:cls, reg r4:V |
    mkenv;
    hash_isMissing = missing.0(hash);
    if hash_isMissing then L0(TRUE) else L0(hash);
  L0(hash_orDefault):
    st hash = hash_orDefault;
    parent_isMissing = missing.0(parent);
    if parent_isMissing then L1() else L2(parent);
  L1():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L2(p);
  L2(parent_orDefault):
    st parent = parent_orDefault;
    size_isMissing = missing.0(size);
    if size_isMissing then L3(29) else L3(size);
  L3(size_orDefault):
    st size = size_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L4(r3):
    popenv;
    return r3;
  L5():
    hash1 = ld hash;
    check L7() else D0();
  L6():
    r2 = dyn base(<lang new.env(hash, parent, size)>);
    goto L4(r2);
  D0():
    deopt 2 [hash1];
  L7():
    hash2 = force? hash1;
    checkMissing(hash2);
    parent1 = ld parent;
    check L8() else D1();
  D1():
    deopt 4 [parent1];
  L8():
    parent2 = force? parent1;
    checkMissing(parent2);
    size1 = ld size;
    check L9() else D2();
  D2():
    deopt 6 [size1];
  L9():
    size2 = force? size1;
    checkMissing(size2);
    new_env = ldf `new.env` in base;
    r4 = dyn new_env(hash2, parent2, size2);
    check L10() else D3();
  D3():
    deopt 9 [r4];
  L10():
    goto L4(r4);
  }
}