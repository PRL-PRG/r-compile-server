fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.get_example_texts_from_source_dir` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg dir_exists:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c:L, reg lapply:cls, reg Rd_db:cls, reg dir3:*, reg dir4:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg _Rd_get_example_code:*, reg _Rd_get_example_code1:V, reg p4:p(V +), reg r11:V |
    mkenv;
    st dir = dir;
    dir_exists = ldf `dir.exists`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
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
    check L3() else D1();
  D1():
    deopt 3 [r3];
  L3():
    r4 = `!`(r3);
    c = `as.logical`(r4);
    if c then L4() else L0();
  L0():
    lapply = ldf lapply;
    check L7() else D2();
  L4():
    popenv;
    return NULL;
  D2():
    deopt 11 [];
  L7():
    p3 = prom<V +>{
      Rd_db = ldf Rd_db;
      p2 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r8 = dyn Rd_db[dir](p2);
      return r8;
    };
    p4 = prom<V +>{
      _Rd_get_example_code = ld `.Rd_get_example_code`;
      _Rd_get_example_code1 = force? _Rd_get_example_code;
      checkMissing(_Rd_get_example_code1);
      return _Rd_get_example_code1;
    };
    r11 = dyn lapply(p3, p4);
    check L8() else D3();
  D3():
    deopt 14 [r11];
  L8():
    popenv;
    return r11;
  }
}