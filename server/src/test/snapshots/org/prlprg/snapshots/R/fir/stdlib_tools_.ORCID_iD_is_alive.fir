fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.ORCID_iD_is_alive` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sprintf:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg list:cls, reg r4:V, reg _curl_multi_run_worker:cls, reg urls:*, reg urls1:V, reg p1:p(V +), reg hdrs:*, reg hdrs1:V, reg p2:p(V +), reg r7:V, reg vapply:cls, reg resp:*, reg resp1:V, reg p3:p(V +), reg _curl_response_status_code:*, reg _curl_response_status_code1:V, reg p4:p(V +), reg r10:V, reg r11:V |
    mkenv;
    st x = x;
    sprintf = ldf sprintf;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn sprintf("https://orcid.org/%s", p);
    check L2() else D1();
  D1():
    deopt 4 [r1];
  L2():
    st urls = r1;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r3):
    st hdrs = r3;
    _curl_multi_run_worker = ldf `.curl_multi_run_worker`;
    check L6() else D3();
  L3():
    list = ldf list in base;
    r4 = dyn list("application/xml");
    check L5() else D2();
  L4():
    r2 = dyn base[Accept]("application/xml");
    goto L0(r2);
  D2():
    deopt 11 [r4];
  D3():
    deopt 14 [];
  L5():
    goto L0(r4);
  L6():
    p1 = prom<V +>{
      urls = ld urls;
      urls1 = force? urls;
      checkMissing(urls1);
      return urls1;
    };
    p2 = prom<V +>{
      hdrs = ld hdrs;
      hdrs1 = force? hdrs;
      checkMissing(hdrs1);
      return hdrs1;
    };
    r7 = dyn _curl_multi_run_worker[, nobody, hdrs](p1, TRUE, p2);
    check L7() else D4();
  D4():
    deopt 20 [r7];
  L7():
    st resp = r7;
    vapply = ldf vapply;
    check L8() else D5();
  D5():
    deopt 23 [];
  L8():
    p3 = prom<V +>{
      resp = ld resp;
      resp1 = force? resp;
      checkMissing(resp1);
      return resp1;
    };
    p4 = prom<V +>{
      _curl_response_status_code = ld `.curl_response_status_code`;
      _curl_response_status_code1 = force? _curl_response_status_code;
      checkMissing(_curl_response_status_code1);
      return _curl_response_status_code1;
    };
    r10 = dyn vapply(p3, p4, 0);
    check L9() else D6();
  D6():
    deopt 27 [r10];
  L9():
    r11 = `==`(r10, 200);
    popenv;
    return r11;
  }
}