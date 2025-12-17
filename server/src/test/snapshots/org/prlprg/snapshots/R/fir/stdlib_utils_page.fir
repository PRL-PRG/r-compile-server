fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner68215366;
    st page = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner68215366(x, method, `...`) {
  (reg x:*, reg method:*, reg ddd:dots) -+> V { var x:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `...`:dots?, reg r4:cls, reg r5:cls, reg r6:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x1:*, reg x2:V, reg c1:L, reg c2:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c7:L, reg r10:V, reg x3:*, reg x4:V, reg length:cls, reg r11:V, reg r12:V, reg c8:L, reg c9:V, reg c11:L, reg x5:*, reg x6:V, reg parent_frame:cls, reg r13:V, reg exists:cls, reg subx:*, reg subx1:V, reg p1:p(V +), reg parent:*, reg parent1:V, reg p2:p(V +), reg r16:V, reg c12:L, reg get:cls, reg subx2:*, reg subx3:V, reg p3:p(V +), reg parent2:*, reg parent3:V, reg p4:p(V +), reg r19:V, reg r20:V, reg stop:cls, reg gettextf:cls, reg x7:*, reg x8:V, reg p5:p(V +), reg r22:V, reg p6:p(V +), reg r24:V, reg deparse1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg substitute:cls, reg r28:V, reg p7:p(V +), reg r30:V, reg tempfile:cls, reg r31:V, reg match_arg:cls, reg method1:*, reg method2:V, reg p8:p(V +), reg r33:V, reg r34:V, reg c13:L, reg local_dput:cls, reg x9:*, reg x10:V, reg p9:p(V +), reg file:*, reg file1:V, reg p10:p(V +), reg ddd1:dots?, reg r37:V, reg sink:cls, reg file2:*, reg file3:V, reg p11:p(V +), reg r40:V, reg local_print:cls, reg x11:*, reg x12:V, reg p12:p(V +), reg ddd2:dots?, reg r42:V, reg sink1:cls, reg r43:V, reg local_file_show:cls, reg file4:*, reg file5:V, reg p13:p(V +), reg ddd3:dots?, reg r45:V |
    mkenv;
    st x = x;
    method_isMissing = missing.0(method);
    if method_isMissing then L0() else L1(method);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("dput", "print");
      goto L0(r2);
    L2():
      r = dyn base("dput", "print");
      goto L0(r);
    };
    goto L1(p);
  L1(method_orDefault):
    st method = method_orDefault;
    st `...` = ddd;
    r4 = clos inner1461416022;
    st `local.file.show` = r4;
    r5 = clos inner4154435446;
    st `local.dput` = r5;
    r6 = clos inner2263185158;
    st `local.print` = r6;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L2(r8):
    c2 = `as.logical`(r8);
    if c2 then L14() else L3(c2);
  L11():
    x1 = ld x;
    check L13() else D0();
  L12():
    r7 = dyn base1(<sym x>);
    goto L2(r7);
  D0():
    deopt 10 [x1];
  L3(c4):
    c11 = `as.logical`(c4);
    if c11 then L20() else L5();
  L13():
    x2 = force? x1;
    checkMissing(x2);
    c1 = `is.character`(x2);
    goto L2(c1);
  L14():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L4(c7, r10):
    r12 = `==`(r10, 1);
    c8 = `as.logical`(r12);
    c9 = `&&`(c7, c8);
    goto L3(c9);
  L5():
    deparse1 = ldf deparse1;
    check L33() else D12();
  L8():
    tempfile = ldf tempfile;
    check L35() else D14();
  L15():
    x3 = ld x;
    check L17() else D1();
  L16():
    r9 = dyn base2(<sym x>);
    goto L4(c2, r9);
  L20():
    x5 = ld x;
    check L21() else D3();
  D1():
    deopt 15 [c2, x3];
  D3():
    deopt 22 [x5];
  D12():
    deopt 49 [];
  D14():
    deopt 54 [];
  L17():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r11 = dyn length(x4);
    check L18() else D2();
  L21():
    x6 = force? x5;
    checkMissing(x6);
    st subx = x6;
    parent_frame = ldf `parent.frame`;
    check L22() else D4();
  L33():
    p7 = prom<V +>{
      sym3 = ldf substitute;
      base3 = ldf substitute in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      substitute = ldf substitute in base;
      r28 = dyn substitute(<sym x>);
      goto L0(r28);
    L2():
      r26 = dyn base3(<sym x>);
      goto L0(r26);
    };
    r30 = dyn deparse1(p7);
    check L34() else D13();
  L35():
    r31 = dyn tempfile("Rpage.");
    check L36() else D15();
  D2():
    deopt 18 [c2, r11];
  D4():
    deopt 26 [];
  D13():
    deopt 51 [r30];
  D15():
    deopt 56 [r31];
  L18():
    goto L4(c2, r11);
  L22():
    r13 = dyn parent_frame();
    check L23() else D5();
  L34():
    st subx = r30;
    goto L8();
  L36():
    st file = r31;
    match_arg = ldf `match.arg`;
    check L37() else D16();
  D5():
    deopt 27 [r13];
  D16():
    deopt 59 [];
  L23():
    st parent = r13;
    exists = ldf exists;
    check L24() else D6();
  L37():
    p8 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r33 = dyn match_arg(p8);
    check L38() else D17();
  D6():
    deopt 30 [];
  D17():
    deopt 61 [r33];
  L24():
    p1 = prom<V +>{
      subx = ld subx;
      subx1 = force? subx;
      checkMissing(subx1);
      return subx1;
    };
    p2 = prom<V +>{
      parent = ld parent;
      parent1 = force? parent;
      checkMissing(parent1);
      return parent1;
    };
    r16 = dyn exists[, envir](p1, p2);
    check L25() else D7();
  L38():
    r34 = `==`(r33, "dput");
    c13 = `as.logical`(r34);
    if c13 then L39() else L9();
  D7():
    deopt 34 [r16];
  L9():
    sink = ldf sink;
    check L43() else D20();
  L10():
    local_file_show = ldf `local.file.show`;
    check L49() else D26();
  L25():
    c12 = `as.logical`(r16);
    if c12 then L26() else L6();
  L39():
    local_dput = ldf `local.dput`;
    check L40() else D18();
  D18():
    deopt 65 [];
  D20():
    deopt 71 [];
  D26():
    deopt 83 [];
  L6():
    stop = ldf stop;
    check L30() else D10();
  L7(r20):
    goto L8();
  L26():
    get = ldf get;
    check L27() else D8();
  L40():
    p9 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p10 = prom<V +>{
      file = ld file;
      file1 = force? file;
      checkMissing(file1);
      return file1;
    };
    ddd1 = ld `...`;
    r37 = dyn local_dput[, , `...`](p9, p10, ddd1);
    check L41() else D19();
  L43():
    p11 = prom<V +>{
      file2 = ld file;
      file3 = force? file2;
      checkMissing(file3);
      return file3;
    };
    r40 = dyn sink(p11);
    check L44() else D21();
  L49():
    p13 = prom<V +>{
      file4 = ld file;
      file5 = force? file4;
      checkMissing(file5);
      return file5;
    };
    ddd3 = ld `...`;
    r45 = dyn local_file_show[, `...`](p13, ddd3);
    check L50() else D27();
  D8():
    deopt 36 [];
  D10():
    deopt 43 [];
  D19():
    deopt 69 [r37];
  D21():
    deopt 73 [r40];
  D27():
    deopt 86 [r45];
  L27():
    p3 = prom<V +>{
      subx2 = ld subx;
      subx3 = force? subx2;
      checkMissing(subx3);
      return subx3;
    };
    p4 = prom<V +>{
      parent2 = ld parent;
      parent3 = force? parent2;
      checkMissing(parent3);
      return parent3;
    };
    r19 = dyn get[, envir](p3, p4);
    check L28() else D9();
  L30():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r22 = dyn gettextf("no object named '%s' to show", p5);
      return r22;
    };
    r24 = dyn stop[, domain](p6, NA_LGL);
    check L31() else D11();
  L41():
    goto L10();
  L44():
    local_print = ldf `local.print`;
    check L45() else D22();
  L50():
    popenv;
    return r45;
  D9():
    deopt 40 [r19];
  D11():
    deopt 47 [r24];
  D22():
    deopt 75 [];
  L28():
    st x = r19;
    goto L7(r19);
  L31():
    goto L7(r24);
  L45():
    p12 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    ddd2 = ld `...`;
    r42 = dyn local_print[, `...`](p12, ddd2);
    check L46() else D23();
  D23():
    deopt 78 [r42];
  L46():
    sink1 = ldf sink;
    check L47() else D24();
  D24():
    deopt 80 [];
  L47():
    r43 = dyn sink1();
    check L48() else D25();
  D25():
    deopt 81 [r43];
  L48():
    goto L10();
  }
}
fun inner1461416022(file, title, `delete.file`, pager, `...`) {
  (reg file:*, reg title:*, reg delete_file:*, reg pager:*, reg ddd:dots) -+> V { var file:*, var title:*, reg title_isMissing:L, reg title_orDefault:*, reg subx:*, reg subx1:V, reg p:p(V +), var `delete.file`:*, reg delete_file_isMissing:L, reg delete_file_orDefault:*, var pager:*, reg pager_isMissing:L, reg pager_orDefault:*, reg getOption:cls, reg r1:V, reg p1:p(V +), var `...`:dots?, reg file_show:cls, reg file1:*, reg file2:V, reg p2:p(V +), reg title1:*, reg title2:V, reg p3:p(V +), reg delete_file1:*, reg delete_file2:V, reg p4:p(V +), reg pager1:*, reg pager2:V, reg p5:p(V +), reg r7:V |
    mkenv;
    st file = file;
    title_isMissing = missing.0(title);
    if title_isMissing then L0() else L1(title);
  L0():
    p = prom<V +>{
      subx = ld subx;
      subx1 = force? subx;
      checkMissing(subx1);
      return subx1;
    };
    goto L1(p);
  L1(title_orDefault):
    st title = title_orDefault;
    delete_file_isMissing = missing.0(delete_file);
    if delete_file_isMissing then L2(TRUE) else L2(delete_file);
  L2(delete_file_orDefault):
    st `delete.file` = delete_file_orDefault;
    pager_isMissing = missing.0(pager);
    if pager_isMissing then L3() else L4(pager);
  L3():
    p1 = prom<V +>{
      getOption = ldf getOption;
      r1 = dyn getOption("pager");
      return r1;
    };
    goto L4(p1);
  L4(pager_orDefault):
    st pager = pager_orDefault;
    st `...` = ddd;
    file_show = ldf `file.show`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p2 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    p3 = prom<V +>{
      title1 = ld title;
      title2 = force? title1;
      checkMissing(title2);
      return title2;
    };
    p4 = prom<V +>{
      delete_file1 = ld `delete.file`;
      delete_file2 = force? delete_file1;
      checkMissing(delete_file2);
      return delete_file2;
    };
    p5 = prom<V +>{
      pager1 = ld pager;
      pager2 = force? pager1;
      checkMissing(pager2);
      return pager2;
    };
    r7 = dyn file_show[, title, `delete.file`, pager](p2, p3, p4, p5);
    check L6() else D1();
  D1():
    deopt 9 [r7];
  L6():
    popenv;
    return r7;
  }
}
fun inner4154435446(x, file, title, `delete.file`, pager, `...`) {
  (reg x:*, reg file:*, reg title:*, reg delete_file:*, reg pager:*, reg ddd:dots) -+> V { var x:*, var file:*, var title:*, var `delete.file`:*, var pager:*, var `...`:dots?, reg dput:cls, reg x1:*, reg x2:V, reg p:p(V +), reg file1:*, reg file2:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V |
    mkenv;
    st x = x;
    st file = file;
    st title = title;
    st `delete.file` = delete_file;
    st pager = pager;
    st `...` = ddd;
    dput = ldf dput;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    ddd1 = ld `...`;
    r2 = dyn dput[, , `...`](p, p1, ddd1);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner2263185158(x, title, `delete.file`, pager, `...`) {
  (reg x:*, reg title:*, reg delete_file:*, reg pager:*, reg ddd:dots) -+> V { var x:*, var title:*, var `delete.file`:*, var pager:*, var `...`:dots?, reg print:cls, reg x1:*, reg x2:V, reg p:p(V +), reg ddd1:dots?, reg r1:V |
    mkenv;
    st x = x;
    st title = title;
    st `delete.file` = delete_file;
    st pager = pager;
    st `...` = ddd;
    print = ldf print;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    ddd1 = ld `...`;
    r1 = dyn print[, `...`](p, ddd1);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}