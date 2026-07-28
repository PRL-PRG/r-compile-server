fun main() {
  () --> v1(I) {
    left: p(v1(I) -) = prom<v1(I) ->{
      return <int 20>;
    };
    right: p(v1(I) -) = prom<v1(I) ->{
      return <int 22>;
    };
    left0: v1(I) = force? left;
    right0: v1(I) = force? right;
    left0u: I = unbox< v1(I) --> I >(left0);
    right0u: I = unbox< v1(I) --> I >(right0);
    sum: I = `+`< I,I --> I >(left0u, right0u);
    sumu: v1(I) = box< I --> v1(I) >(sum);
    return sumu;
  }
}
