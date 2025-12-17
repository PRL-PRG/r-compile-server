fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2556991991;
    st `.vinstall_package_indices` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2556991991(src_dir, out_dir, packages) {
  (reg src_dir:*, reg out_dir:*, reg packages:*) -+> V { var src_dir:*, var out_dir:*, var packages:*, reg unlist:cls, reg strsplit:cls, reg packages1:*, reg packages2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg _install_package_indices:cls, reg file_path:cls, reg src_dir1:*, reg src_dir2:V, reg p2:p(V +), reg p3:*, reg p4:V, reg p5:p(V +), reg r6:V, reg p6:p(V +), reg file_path1:cls, reg out_dir1:*, reg out_dir2:V, reg p7:p(V +), reg p8:*, reg p9:V, reg p10:p(V +), reg r10:V, reg p11:p(V +), reg r12:V, reg __:cls, reg r13:V, reg r14:cls, reg _Library:*, reg _Library1:V, reg p12:p(V +), reg r16:V, reg sym:cls, reg base:cls, reg guard:L, reg r17:V, reg r18:V, reg invisible:cls, reg r19:V |
    mkenv;
    st src_dir = src_dir;
    st out_dir = out_dir;
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
    _install_package_indices = ldf `.install_package_indices`;
    check L6() else D2();
  L5():
    __ = ldf `::`;
    check L8() else D4();
  D2():
    deopt 5 [i2];
  D4():
    deopt 13 [];
  L6():
    p6 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        src_dir1 = ld src_dir;
        src_dir2 = force? src_dir1;
        checkMissing(src_dir2);
        return src_dir2;
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
        out_dir1 = ld out_dir;
        out_dir2 = force? out_dir1;
        checkMissing(out_dir2);
        return out_dir2;
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
    r12 = dyn _install_package_indices(p6, p11);
    check L7() else D3();
  L8():
    r13 = dyn __("utils", "make.packages.html");
    check L9() else D5();
  D3():
    deopt 8 [i2, r12];
  D5():
    deopt 16 [r13];
  L7():
    goto L0(i2);
  L9():
    checkFun.0(r13);
    r14 = r13 as cls;
    p12 = prom<V +>{
      _Library = ld `.Library`;
      _Library1 = force? _Library;
      checkMissing(_Library1);
      return _Library1;
    };
    r16 = dyn r14[, verbose](p12, FALSE);
    check L10() else D6();
  D6():
    deopt 21 [r16];
  L10():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L2(r18):
    popenv;
    return r18;
  L11():
    invisible = ldf invisible in base;
    r19 = dyn invisible();
    check L13() else D7();
  L12():
    r17 = dyn base();
    goto L2(r17);
  D7():
    deopt 25 [r19];
  L13():
    goto L2(r19);
  }
}