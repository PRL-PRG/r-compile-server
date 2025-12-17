fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.get_example_texts_from_example_dir` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg dir_exists:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg list_files_with_exts:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r6:V, reg lapply:cls, reg files:*, reg files1:V, reg p2:p(V +), reg r8:cls, reg p3:p(V +), reg r10:V, reg files2:*, reg files3:V, reg l:*, reg names__:cls, reg r11:V, reg texts:*, reg texts1:V |
    mkenv;
    st dir = dir;
    dir_exists = ldf `dir.exists`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn dir_exists(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L4() else L0();
  L0():
    list_files_with_exts = ldf list_files_with_exts;
    check L7() else D2();
  L4():
    popenv;
    return NULL;
  D2():
    deopt 11 [];
  L7():
    p1 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r6 = dyn list_files_with_exts(p1, "R");
    check L8() else D3();
  D3():
    deopt 14 [r6];
  L8():
    st files = r6;
    lapply = ldf lapply;
    check L9() else D4();
  D4():
    deopt 17 [];
  L9():
    p2 = prom<V +>{
      files = ld files;
      files1 = force? files;
      checkMissing(files1);
      return files1;
    };
    p3 = prom<V +>{
      r8 = clos inner1384373858;
      return r8;
    };
    r10 = dyn lapply(p2, p3);
    check L10() else D5();
  D5():
    deopt 20 [r10];
  L10():
    st texts = r10;
    files2 = ld files;
    check L11() else D6();
  D6():
    deopt 22 [files2];
  L11():
    files3 = force? files2;
    checkMissing(files3);
    l = ld texts;
    names__ = ldf `names<-`;
    check L12() else D7();
  D7():
    deopt 25 [files3, l, files3];
  L12():
    r11 = dyn names__(l, NULL, files3);
    check L13() else D8();
  D8():
    deopt 27 [files3, r11];
  L13():
    st texts = r11;
    texts = ld texts;
    check L14() else D9();
  D9():
    deopt 29 [texts];
  L14():
    texts1 = force? texts;
    checkMissing(texts1);
    popenv;
    return texts1;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg paste:cls, reg readLines:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st f = f;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      readLines = ldf readLines;
      p = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      r1 = dyn readLines[, warn](p, FALSE);
      return r1;
    };
    r3 = dyn paste[, collapse](p1, "\n");
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}