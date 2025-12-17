fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner406387114;
    st `.vinstall_package_namespaces_as_RDS` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner406387114(dir, packages) {
  (reg dir:*, reg packages:*) -+> V { var dir:*, var packages:*, reg unlist:cls, reg strsplit:cls, reg packages1:*, reg packages2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg _install_package_namespace_info:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg p3:*, reg p4:V, reg p5:p(V +), reg r6:V, reg p6:p(V +), reg file_path1:cls, reg dir3:*, reg dir4:V, reg p7:p(V +), reg p8:*, reg p9:V, reg p10:p(V +), reg r10:V, reg p11:p(V +), reg r12:V, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg invisible:cls, reg r15:V |
    mkenv;
    st dir = dir;
    st packages = packages;
    unlist = ldf unlist;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p1 = prom<V +>{
      strsplit = ldf strsplit;
      p = prom<V +>{
        packages1 = ld packages;
        packages2 = force? packages1;
        checkMissing(packages2);
        return packages2;
      };
      r1 = dyn strsplit(p, "[[:space:]]+");
      return r1;
    };
    r3 = dyn unlist(p1);
    check L4() else D1();
  D1():
    deopt 3 [r3];
  L4():
    s = toForSeq(r3);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L5() else L1();
  L1():
    x = `[[`(s, i2, NULL, TRUE);
    st p = x;
    _install_package_namespace_info = ldf `.install_package_namespace_info`;
    check L6() else D2();
  L5():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  D2():
    deopt 5 [i2];
  L2(r14):
    popenv;
    return r14;
  L6():
    p6 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      p5 = prom<V +>{
        p3 = ld p;
        p4 = force? p3;
        checkMissing(p4);
        return p4;
      };
      r6 = dyn file_path(p2, p5);
      return r6;
    };
    p11 = prom<V +>{
      file_path1 = ldf `file.path`;
      p7 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      p10 = prom<V +>{
        p8 = ld p;
        p9 = force? p8;
        checkMissing(p9);
        return p9;
      };
      r10 = dyn file_path1(p7, p10);
      return r10;
    };
    r12 = dyn _install_package_namespace_info(p6, p11);
    check L7() else D3();
  L8():
    invisible = ldf invisible in base;
    r15 = dyn invisible();
    check L10() else D4();
  L9():
    r13 = dyn base();
    goto L2(r13);
  D3():
    deopt 8 [i2, r12];
  D4():
    deopt 15 [r15];
  L7():
    goto L0(i2);
  L10():
    goto L2(r15);
  }
}