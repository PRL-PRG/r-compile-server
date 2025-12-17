fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2431657552;
    st `summary.check_packages_in_dir` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2431657552(object, all, full, `...`) {
  (reg object:*, reg all:*, reg full:*, reg ddd:dots) -+> V { var object:*, var all:*, reg all_isMissing:L, reg all_orDefault:*, var full:*, reg full_isMissing:L, reg full_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg writeLines:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg object3:*, reg object4:V, reg invisible:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg object5:*, reg object6:V, reg attr:cls, reg r12:V, reg writeLines1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg strwrap:cls, reg sprintf:cls, reg dir:*, reg dir1:V, reg p:p(V +), reg r16:V, reg p1:p(V +), reg r18:V, reg c1:cls, reg r19:V, reg p2:p(V +), reg r21:V, reg summarize_check_packages_in_dir_results:cls, reg dir2:*, reg dir3:V, reg p3:p(V +), reg r23:V, reg full1:*, reg full2:V, reg r24:V, reg c2:L, reg c4:V, reg details:*, reg details1:V, reg c5:L, reg c6:V, reg c8:L, reg writeLines2:cls, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg object7:*, reg object8:V, reg invisible1:cls, reg r29:V |
    mkenv;
    st object = object;
    all_isMissing = missing.0(all);
    if all_isMissing then L0(TRUE) else L0(all);
  L0(all_orDefault):
    st all = all_orDefault;
    full_isMissing = missing.0(full);
    if full_isMissing then L1(FALSE) else L1(full);
  L1(full_orDefault):
    st full = full_orDefault;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L15() else L3();
  L11():
    object1 = ld object;
    check L13() else D0();
  L12():
    r = dyn base(<sym object>);
    goto L2(r);
  D0():
    deopt 2 [object1];
  L3():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L13():
    object2 = force? object1;
    checkMissing(object2);
    length = ldf length in base;
    r2 = dyn length(object2);
    check L14() else D1();
  L15():
    writeLines = ldf writeLines;
    check L16() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  L6(r11):
    st dir = r11;
    writeLines1 = ldf writeLines;
    check L28() else D8();
  L14():
    goto L2(r2);
  L16():
    r4 = dyn writeLines("No packages checked.");
    check L17() else D3();
  L24():
    object5 = ld object;
    check L26() else D6();
  L25():
    r10 = dyn base2(<sym object>, "dir");
    goto L6(r10);
  D3():
    deopt 10 [r4];
  D6():
    deopt 22 [object5];
  D8():
    deopt 29 [];
  L17():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L26():
    object6 = force? object5;
    checkMissing(object6);
    attr = ldf attr in base;
    r12 = dyn attr(object6, "dir");
    check L27() else D7();
  L28():
    p2 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      strwrap = ldf strwrap;
      p1 = prom<V +>{
        sprintf = ldf sprintf;
        p = prom<V +>{
          dir = ld dir;
          dir1 = force? dir;
          checkMissing(dir1);
          return dir1;
        };
        r16 = dyn sprintf("Check results for packages in dir '%s':", p);
        return r16;
      };
      r18 = dyn strwrap(p1);
      c1 = ldf c in base;
      r19 = dyn c1(r18, "");
      goto L0(r19);
    L2():
      r13 = dyn base3(<lang strwrap(sprintf("Check results for packages in dir '%s':", dir))>, "");
      goto L0(r13);
    };
    r21 = dyn writeLines1(p2);
    check L29() else D9();
  D7():
    deopt 26 [r12];
  D9():
    deopt 31 [r21];
  L4(r6):
    popenv;
    return r6;
  L18():
    object3 = ld object;
    check L20() else D4();
  L19():
    r5 = dyn base1(<sym object>);
    goto L4(r5);
  L27():
    goto L6(r12);
  L29():
    summarize_check_packages_in_dir_results = ldf summarize_check_packages_in_dir_results;
    check L30() else D10();
  D4():
    deopt 13 [object3];
  D10():
    deopt 33 [];
  L20():
    object4 = force? object3;
    checkMissing(object4);
    invisible = ldf invisible in base;
    r7 = dyn invisible(object4);
    check L21() else D5();
  L30():
    p3 = prom<V +>{
      dir2 = ld dir;
      dir3 = force? dir2;
      checkMissing(dir3);
      return dir3;
    };
    r23 = dyn summarize_check_packages_in_dir_results(p3);
    check L31() else D11();
  D5():
    deopt 16 [r7];
  D11():
    deopt 35 [r23];
  L21():
    goto L4(r7);
  L31():
    st details = r23;
    full1 = ld full;
    check L32() else D12();
  D12():
    deopt 37 [full1];
  L32():
    full2 = force? full1;
    checkMissing(full2);
    r24 = `!`(full2);
    c2 = `as.logical`(r24);
    if c2 then L33() else L7(c2);
  L7(c4):
    c8 = `as.logical`(c4);
    if c8 then L36() else L8();
  L33():
    details = ld details;
    check L34() else D13();
  D13():
    deopt 40 [c2, details];
  L8():
    goto L9();
  L9():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L34():
    details1 = force? details;
    checkMissing(details1);
    c5 = `as.logical`(details1);
    c6 = `&&`(c2, c5);
    goto L7(c6);
  L36():
    writeLines2 = ldf writeLines;
    check L37() else D14();
  D14():
    deopt 44 [];
  L10(r28):
    popenv;
    return r28;
  L37():
    r25 = dyn writeLines2("\nUse summary(full = TRUE) for details.");
    check L38() else D15();
  L40():
    object7 = ld object;
    check L42() else D16();
  L41():
    r27 = dyn base4(<sym object>);
    goto L10(r27);
  D15():
    deopt 46 [r25];
  D16():
    deopt 51 [object7];
  L38():
    goto L9();
  L42():
    object8 = force? object7;
    checkMissing(object8);
    invisible1 = ldf invisible in base;
    r29 = dyn invisible1(object8);
    check L43() else D17();
  D17():
    deopt 54 [r29];
  L43():
    goto L10(r29);
  }
}