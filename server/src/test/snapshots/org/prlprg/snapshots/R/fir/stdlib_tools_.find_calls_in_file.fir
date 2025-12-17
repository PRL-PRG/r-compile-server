fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3814544484;
    st `.find_calls_in_file` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3814544484(file, encoding, predicate, recursive) {
  (reg file:*, reg encoding:*, reg predicate:*, reg recursive:*) -+> V { var file:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, var predicate:*, reg predicate_isMissing:L, reg predicate_orDefault:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg _find_calls:cls, reg _parse_code_file:cls, reg file1:*, reg file2:V, reg p:p(V +), reg encoding1:*, reg encoding2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg predicate1:*, reg predicate2:V, reg p3:p(V +), reg recursive1:*, reg recursive2:V, reg p4:p(V +), reg r6:V |
    mkenv;
    st file = file;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0(NA_LGL) else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    predicate_isMissing = missing.0(predicate);
    if predicate_isMissing then L1(NULL) else L1(predicate);
  L1(predicate_orDefault):
    st predicate = predicate_orDefault;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L2(FALSE) else L2(recursive);
  L2(recursive_orDefault):
    st recursive = recursive_orDefault;
    _find_calls = ldf `.find_calls`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p2 = prom<V +>{
      _parse_code_file = ldf `.parse_code_file`;
      p = prom<V +>{
        file1 = ld file;
        file2 = force? file1;
        checkMissing(file2);
        return file2;
      };
      p1 = prom<V +>{
        encoding1 = ld encoding;
        encoding2 = force? encoding1;
        checkMissing(encoding2);
        return encoding2;
      };
      r2 = dyn _parse_code_file(p, p1);
      return r2;
    };
    p3 = prom<V +>{
      predicate1 = ld predicate;
      predicate2 = force? predicate1;
      checkMissing(predicate2);
      return predicate2;
    };
    p4 = prom<V +>{
      recursive1 = ld recursive;
      recursive2 = force? recursive1;
      checkMissing(recursive2);
      return recursive2;
    };
    r6 = dyn _find_calls(p2, p3, p4);
    check L4() else D1();
  D1():
    deopt 5 [r6];
  L4():
    popenv;
    return r6;
  }
}