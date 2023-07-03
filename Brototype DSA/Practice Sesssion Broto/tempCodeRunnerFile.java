class garbage
{
    public static void main(String[] args)
    {
        garbage g = new garbage();
        System.out.println(Runtime.getRuntime().freeMemory());
        System.gc();
        System.out.println(Runtime.getRuntime().freeMemory());
    }
}