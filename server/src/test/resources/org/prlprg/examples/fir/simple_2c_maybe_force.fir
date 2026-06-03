fun main() {
  () --> v1(I) { reg left:p(v1(I) -), reg right:p(v1(I) -), reg left0:v1(I), reg right0:v1(I), reg left0u:I, reg right0u:I, reg sum:I, reg sumu:v1(I) |
    left = prom<v1(I) ->{ return <int 20>; };
    right = prom<v1(I) ->{ return <int 22>; };
    left0 = force? left;
    right0 = force? right;
    left0u = unbox<v1(I) --> I>(left0);
    right0u = unbox<v1(I) --> I>(right0);
    sum = `+`< I,I --> I >(left0u, right0u);
    sumu = box< I --> v1(I) >(sum);
    return sumu;
  }
}
