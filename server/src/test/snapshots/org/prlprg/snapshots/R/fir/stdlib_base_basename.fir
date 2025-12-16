fun main() {
  () -+> V { reg r:cls, reg basename:cls, reg file_path:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg dirname:cls, reg file_path1:cls, reg r8:V, reg p2:p(V +), reg r10:V |
    mkenv;
    r = clos inner859363206;
    st basename = r;
    basename = ldf basename;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r2):
        return r2;
      L1():
        c = ldf c in base;
        r3 = dyn c("file1", "file2");
        goto L0(r3);
      L2():
        r1 = dyn base("file1", "file2");
        goto L0(r1);
      };
      r5 = dyn file_path("", "p1", "p2", "p3", p);
      return r5;
    };
    r7 = dyn basename(p1);
    check L1() else D1();
  D1():
    deopt 6 [r7];
  L1():
    dirname = ldf dirname;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p2 = prom<V +>{
      file_path1 = ldf `file.path`;
      r8 = dyn file_path1("", "p1", "p2", "p3", "filename");
      return r8;
    };
    r10 = dyn dirname(p2);
    check L3() else D3();
  D3():
    deopt 10 [r10];
  L3():
    popenv;
    return r10;
  }
}
fun inner859363206(path) {
  (reg path:*) -+> V { var path:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg path1:*, reg path2:V, reg basename:cls, reg r2:V |
    mkenv;
    st path = path;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    path1 = ld path;
    check L3() else D0();
  L2():
    r = dyn base(<lang basename(path)>);
    goto L0(r);
  D0():
    deopt 2 [path1];
  L3():
    path2 = force? path1;
    checkMissing(path2);
    basename = ldf basename in base;
    r2 = dyn basename(path2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}