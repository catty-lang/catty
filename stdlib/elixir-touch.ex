
defmodule CattyLang do
  defmodule StdLib do
    defprotocol Stringifyable do
      def ToString()
    end
    defprotocol Equateable do
      def Equals(operand2)
    end
    defprotocol HashProvider do
      def GetHashCode()
    end

    defprotocol CattyObject do
    end
  end
end
