fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.haveRds` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg dir_exists:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg c:L, reg c1:V, reg file_exists:cls, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V, reg c3:L, reg c4:V |
    mkenv;
    st dir = dir;
    dir_exists = ldf `dir.exists`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r1 = dyn file_path(p, "man");
      return r1;
    };
    r3 = dyn dir_exists(p1);
    check L2() else D1();
  D1():
    deopt 3 [r3];
  L2():
    c = `as.logical`(r3);
    if c then L0(c) else L3();
  L0(c1):
    popenv;
    return c1;
  L3():
    file_exists = ldf `file.exists`;
    check L4() else D2();
  D2():
    deopt 5 [c];
  L4():
    p3 = prom<V +>{
      file_path1 = ldf `file.path`;
      p2 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r5 = dyn file_path1(p2, "help", "paths.rds");
      return r5;
    };
    r7 = dyn file_exists(p3);
    check L5() else D3();
  D3():
    deopt 7 [c, r7];
  L5():
    c3 = `as.logical`(r7);
    c4 = `||`(c, c3);
    goto L0(c4);
  }
}