fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3207154116;
    st curlGetHeaders = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3207154116(url, redirect, verify, timeout, TLS) {
  (reg url:*, reg redirect:*, reg verify:*, reg timeout:*, reg TLS:*) -+> V { var url:*, var redirect:*, reg redirect_isMissing:L, reg redirect_orDefault:*, var verify:*, reg verify_isMissing:L, reg verify_orDefault:*, var timeout:*, reg timeout_isMissing:L, reg timeout_orDefault:*, var TLS:*, reg TLS_isMissing:L, reg TLS_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg url1:*, reg url2:V, reg redirect1:*, reg redirect2:V, reg verify1:*, reg verify2:V, reg timeout1:*, reg timeout2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg TLS1:*, reg TLS2:V, reg as_character:cls, reg r4:V, reg curlGetHeaders:cls, reg r5:V |
    mkenv;
    st url = url;
    redirect_isMissing = missing.0(redirect);
    if redirect_isMissing then L0(TRUE) else L0(redirect);
  L0(redirect_orDefault):
    st redirect = redirect_orDefault;
    verify_isMissing = missing.0(verify);
    if verify_isMissing then L1(TRUE) else L1(verify);
  L1(verify_orDefault):
    st verify = verify_orDefault;
    timeout_isMissing = missing.0(timeout);
    if timeout_isMissing then L2(0) else L2(timeout);
  L2(timeout_orDefault):
    st timeout = timeout_orDefault;
    TLS_isMissing = missing.0(TLS);
    if TLS_isMissing then L3("") else L3(TLS);
  L3(TLS_orDefault):
    st TLS = TLS_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L4(r1):
    popenv;
    return r1;
  L6():
    url1 = ld url;
    check L8() else D0();
  L7():
    r = dyn base(<lang curlGetHeaders(url, redirect, verify, timeout, as.character(TLS))>);
    goto L4(r);
  D0():
    deopt 2 [url1];
  L8():
    url2 = force? url1;
    checkMissing(url2);
    redirect1 = ld redirect;
    check L9() else D1();
  D1():
    deopt 4 [redirect1];
  L9():
    redirect2 = force? redirect1;
    checkMissing(redirect2);
    verify1 = ld verify;
    check L10() else D2();
  D2():
    deopt 6 [verify1];
  L10():
    verify2 = force? verify1;
    checkMissing(verify2);
    timeout1 = ld timeout;
    check L11() else D3();
  D3():
    deopt 8 [timeout1];
  L11():
    timeout2 = force? timeout1;
    checkMissing(timeout2);
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L5(r3):
    curlGetHeaders = ldf curlGetHeaders in base;
    r5 = dyn curlGetHeaders(url2, redirect2, verify2, timeout2, r3);
    check L16() else D6();
  L12():
    TLS1 = ld TLS;
    check L14() else D4();
  L13():
    r2 = dyn base1(<sym TLS>);
    goto L5(r2);
  D4():
    deopt 12 [TLS1];
  D6():
    deopt 17 [r5];
  L14():
    TLS2 = force? TLS1;
    checkMissing(TLS2);
    as_character = ldf `as.character` in base;
    r4 = dyn as_character(TLS2);
    check L15() else D5();
  L16():
    goto L4(r5);
  D5():
    deopt 15 [r4];
  L15():
    goto L5(r4);
  }
}