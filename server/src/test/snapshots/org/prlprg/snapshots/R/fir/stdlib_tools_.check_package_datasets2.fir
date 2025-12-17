fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2859057048;
    st `.check_package_datasets2` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2859057048(fileName, pkgname) {
  (reg fileName:*, reg pkgname:*) -+> V { var fileName:*, var pkgname:*, reg search:cls, reg r:V, reg new_env:cls, reg r1:V, reg suppressMessages:cls, reg __:cls, reg r2:V, reg r3:cls, reg fileName1:*, reg fileName2:V, reg p:p(V +), reg pkgname1:*, reg pkgname2:V, reg p1:p(V +), reg dataEnv:*, reg dataEnv1:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg ls:cls, reg dataEnv2:*, reg dataEnv3:V, reg p4:p(V +), reg r13:V, reg length:cls, reg r14:V, reg r15:V, reg c:L, reg message:cls, reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg search1:cls, reg r20:V, reg oldSearch:*, reg oldSearch1:V, reg identical:cls, reg r21:V, reg r22:V, reg c1:L, reg message1:cls, reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg invisible:cls, reg r27:V |
    mkenv;
    st fileName = fileName;
    st pkgname = pkgname;
    search = ldf search;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    r = dyn search();
    check L8() else D1();
  D1():
    deopt 2 [r];
  L8():
    st oldSearch = r;
    new_env = ldf `new.env`;
    check L9() else D2();
  D2():
    deopt 5 [];
  L9():
    r1 = dyn new_env[hash](TRUE);
    check L10() else D3();
  D3():
    deopt 8 [r1];
  L10():
    st dataEnv = r1;
    suppressMessages = ldf suppressMessages;
    check L11() else D4();
  D4():
    deopt 11 [];
  L11():
    p3 = prom<V +>{
      __ = ldf `::`;
      r2 = dyn __("utils", "data");
      checkFun.0(r2);
      r3 = r2 as cls;
      p = prom<V +>{
        fileName1 = ld fileName;
        fileName2 = force? fileName1;
        checkMissing(fileName2);
        return fileName2;
      };
      p1 = prom<V +>{
        pkgname1 = ld pkgname;
        pkgname2 = force? pkgname1;
        checkMissing(pkgname2);
        return pkgname2;
      };
      p2 = prom<V +>{
        dataEnv = ld dataEnv;
        dataEnv1 = force? dataEnv;
        checkMissing(dataEnv1);
        return dataEnv1;
      };
      r7 = dyn r3[list, package, envir](p, p1, p2);
      return r7;
    };
    r9 = dyn suppressMessages(p3);
    check L12() else D5();
  D5():
    deopt 13 [r9];
  L12():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r11):
    r15 = `!`(r11);
    c = `as.logical`(r15);
    if c then L18() else L1();
  L13():
    ls = ldf ls;
    check L15() else D6();
  L14():
    r10 = dyn base(<lang `(`(ls(dataEnv))>);
    goto L0(r10);
  D6():
    deopt 17 [];
  L1():
    goto L2();
  L2():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L15():
    p4 = prom<V +>{
      dataEnv2 = ld dataEnv;
      dataEnv3 = force? dataEnv2;
      checkMissing(dataEnv3);
      return dataEnv3;
    };
    r13 = dyn ls(p4);
    check L16() else D7();
  L18():
    message = ldf message;
    check L19() else D9();
  D7():
    deopt 19 [r13];
  D9():
    deopt 24 [];
  L3(r19):
    r22 = `!`(r19);
    c1 = `as.logical`(r22);
    if c1 then L28() else L4();
  L16():
    length = ldf length in base;
    r14 = dyn length(r13);
    check L17() else D8();
  L19():
    r16 = dyn message("No dataset created in 'envir'");
    check L20() else D10();
  L22():
    search1 = ldf search;
    check L24() else D11();
  L23():
    r18 = dyn base1(<lang search()>, <sym oldSearch>);
    goto L3(r18);
  D8():
    deopt 21 [r14];
  D10():
    deopt 26 [r16];
  D11():
    deopt 32 [];
  L4():
    goto L5();
  L5():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L17():
    goto L0(r14);
  L20():
    goto L2();
  L24():
    r20 = dyn search1();
    check L25() else D12();
  L28():
    message1 = ldf message;
    check L29() else D15();
  D12():
    deopt 33 [r20];
  D15():
    deopt 47 [];
  L6(r26):
    popenv;
    return r26;
  L25():
    oldSearch = ld oldSearch;
    check L26() else D13();
  L29():
    r23 = dyn message1("Search path was changed");
    check L30() else D16();
  L32():
    invisible = ldf invisible in base;
    r27 = dyn invisible(NULL);
    check L34() else D17();
  L33():
    r25 = dyn base2(NULL);
    goto L6(r25);
  D13():
    deopt 34 [oldSearch];
  D16():
    deopt 49 [r23];
  D17():
    deopt 56 [r27];
  L26():
    oldSearch1 = force? oldSearch;
    checkMissing(oldSearch1);
    identical = ldf identical in base;
    r21 = dyn identical(r20, oldSearch1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L27() else D14();
  L30():
    goto L5();
  L34():
    goto L6(r27);
  D14():
    deopt 44 [r21];
  L27():
    goto L3(r21);
  }
}